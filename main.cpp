#include <iostream>

//#include <gl/glew.h>
//#include <GL/glfw3.h>

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <gl/gl.h>
#include <gl/glu.h>
#include "rubik.h"

//#include "lib/glm/glm/glm.hpp"

//#include <ft2build.h>
//#include FT_FREETYPE_H

class Quaternion{

public:
    Quaternion() : x(0.0), y(0.0), z(0.0), w(0.0) { };
    Quaternion(float xi, float yi, float zi, float wi) : x(xi), y(yi), z(zi), w(wi) { };


    Quaternion negate() {
        return Quaternion(-this->x, -this->y, -this->z, this->w);
    }

    Quaternion& normalize() {
        return (*this *= 1 / sqrt ( x*x + y*y + z*z + w*w ));
    }

    //! Faster method to create a rotation matrix, you should normalize the quaternion before!
    void getMatrixFast(float dest[16]) const
    {
        // gpu quaternion skinning => fast Bones transform chain O_O YEAH!
        // http://www.mrelusive.com/publications/papers/SIMD-From-Quaternion-to-Matrix-and-Back.pdf
        dest[0] = 1.0f - 2.0f*y*y - 2.0f*z*z;
        dest[1] = 2.0f*x*y + 2.0f*z*w;
        dest[2] = 2.0f*x*z - 2.0f*y*w;
        dest[3] = 0.0f;

        dest[4] = 2.0f*x*y - 2.0f*z*w;
        dest[5] = 1.0f - 2.0f*x*x - 2.0f*z*z;
        dest[6] = 2.0f*z*y + 2.0f*x*w;
        dest[7] = 0.0f;

        dest[8] = 2.0f*x*z + 2.0f*y*w;
        dest[9] = 2.0f*z*y - 2.0f*x*w;
        dest[10] = 1.0f - 2.0f*x*x - 2.0f*y*y;
        dest[11] = 0.0f;

        dest[12] = 0.f;
        dest[13] = 0.f;
        dest[14] = 0.f;
        dest[15] = 1.f;
    }

    void getMatrix(float dest[16]) const {
        dest[0] = w*w + x*x - y*y - z*z;
        dest[1] = 2.f*x*y + 2.f*w*z;
        dest[2] = 2.f*x*z - 2.f*w*y;
        dest[3] = 0.f;

        dest[4] = 2.f*x*y - 2.f*w*z;
        dest[5] = w*w - x*x + y*y - z*z;
        dest[6] = 2.f*y*z + 2.f*w*x;
        dest[7] = 0.f;

        dest[8] = 2.f*x*z + 2.f*w*y;
        dest[9] = 2.f*y*z - 2.f*w*x;
        dest[10] = w*w - x*x - y*y + z*z;
        dest[11] = 0.f;

        dest[12] = 0.f;
        dest[13] = 0.f;
        dest[14] = 0.f;
        dest[15] = 1.f;

    }

    bool isZero() {
        return (this->x == 0 & this->y == 0 & this->z == 0 & this->w == 0);
    }

    // assignment operator
    Quaternion operator = (const Quaternion& other)
    {
        x = other.x;
        y = other.y;
        z = other.z;
        w = other.w;
        return *this;
    }

// multiplication operator
    inline Quaternion operator * (const Quaternion& other) const
    {
        Quaternion tmp;

        tmp.w = (other.w * w) - (other.x * x) - (other.y * y) - (other.z * z) ;
        tmp.x = (other.w * x) + (other.x * w) + (other.y * z) - (other.z * y);
        tmp.y = (other.w * y) + (other.y * w) + (other.z * x) - (other.x * z);
        tmp.z = (other.w * z) + (other.z * w) + (other.x * y) - (other.y * x);

        return tmp;
    }


// multiplication operator
    inline Quaternion operator * (float a) const
    {
        return Quaternion(a*x, a*y, a*z, a*w);
    }


// multiplication operator
    inline Quaternion& operator *= (float a)
    {
        x*=a;
        y*=a;
        z*=a;
        w*=a;
        return *this;
    }

// multiplication operator

    inline Quaternion operator *= (const Quaternion& other)
    {
        return (*this = other * (*this));
    }


// add operator
    inline Quaternion operator + (const Quaternion& b) const
    {
        return Quaternion(x+b.x, y+b.y, z+b.z, w+b.w);
    }

    void print(){
        printf("%f  %f  %f  %f\n",x,y,z,w);
    }

public:

    float x, y, z, w;

};

class Model{

public:

    void (*pDraw)();

    float xAngle = 0, yAngle = 0, zAngle = 0;

    Model( void (*pDraw)() ) : xAngle(0), yAngle(0), zAngle(0), pDraw(pDraw) { }

    void draw(){

        glPushMatrix();

        glRotatef(xAngle,1,0,0);
        glRotatef(yAngle,0,1,0);
        glRotatef(zAngle,0,0,1);

        pDraw(); // ???

        glPopMatrix();

    }

    // FIXME:
    void draw(bool r, bool g, bool b){

        glPushMatrix();

        glRotatef(xAngle,1,0,0);
        glRotatef(yAngle,0,1,0);
        glRotatef(zAngle,0,0,1);

        glColorMask(r,g,b,0);

        pDraw(); // ???

        glColorMask(1,1,1,1);

        glPopMatrix();

    }

};

class RubiksFace{
public:

    Model  *Top, *Bottom, *Left,
           *Right, *TopLeft, *TopRight,
           *BottomLeft, *BottomRight, *Centre;
    Model* cubeArr[9];

    float dirX, dirY, dirZ;


public:
    RubiksFace(Model* modelArr[9], float dirX, float dirY, float dirZ){

        Top         = modelArr[0];
        Bottom      = modelArr[1];
        Left        = modelArr[2];
        Right       = modelArr[3];
        TopLeft     = modelArr[4];
        TopRight    = modelArr[5];
        BottomLeft  = modelArr[6];
        BottomRight = modelArr[7];
        Centre      = modelArr[8];

        for( int i=0; i<9; i++){
            cubeArr[i] = modelArr[i];
        }

        this->dirX = dirX;
        this->dirY = dirY;
        this->dirZ = dirZ;

        std::cout << modelArr << "   " << modelArr[0] << "  " << cubeArr << "  " << cubeArr[1] << "\n";

    }

    void rotate(){
        for(int i=0; i<9; i++){
            cubeArr[i]->zAngle += 90/10 * dirZ; // TODO: remove magic
            cubeArr[i]->yAngle += 90/10 * dirY;
            cubeArr[i]->xAngle += 90/10 * dirX;
        }
    }

    void turnCCW(){
        std::swap(*Top, *Right);
        std::swap(*Left, *Bottom);
        std::swap(*Left, *Right);

        std::swap(*TopLeft, *TopRight);
        std::swap(*BottomLeft, *BottomRight);
        std::swap(*BottomLeft, *TopRight);
    }

    void turnCW(){

        std::swap(*Top, *Left);
        std::swap(*Right, *Bottom);
        std::swap(*Left, *Right);

        std::swap(*TopLeft, *BottomLeft);
        std::swap(*TopRight, *BottomRight);
        std::swap(*BottomLeft, *TopRight);

    }
    
    void draw(){
        Top         ->draw();
        Bottom      ->draw();
        Left        ->draw();
        Right       ->draw();
        TopLeft     ->draw();
        TopRight    ->draw();
        BottomLeft  ->draw();
        BottomRight ->draw();
        Centre      ->draw();
    }
    
    void test_draw(){

        Top         ->draw(1,0,0);
        Bottom      ->draw(0,0,0);
        Left        ->draw(0,1,0);
        Right       ->draw(1,1,1);

        TopLeft     ->draw(1,0,0);
        TopRight    ->draw(0,1,0);
        BottomLeft  ->draw(0,0,1);
        BottomRight ->draw();

        //Centre      ->draw();
    }

};

class RubiksCube{

public:
    Model *Top;

    Model *TopFront, *TopBack, *TopLeft, *TopRight;
    Model *TopFrontLeft, *TopFrontRight, *TopBackLeft, *TopBackRight;

    Model *MiddleFront, *MiddleBack, *MiddleLeft, *MiddleRight;
    Model *MiddleFrontLeft, *MiddleFrontRight, *MiddleBackLeft, *MiddleBackRight;

    Model *Bottom;

    Model *BottomFront, *BottomBack, *BottomLeft, *BottomRight;
    Model *BottomFrontLeft, *BottomFrontRight, *BottomBackLeft, *BottomBackRight;


public:

    Model* Arr[26] = {Top, TopFront, TopBack, TopLeft, TopRight,
                     TopFrontLeft, TopFrontRight, TopBackLeft, TopBackRight,

                     MiddleFront, MiddleBack, MiddleLeft, MiddleRight,
                     MiddleFrontLeft, MiddleFrontRight, MiddleBackLeft, MiddleBackRight,

                     Bottom, BottomFront, BottomBack, BottomLeft, BottomRight,
                     BottomFrontLeft, BottomFrontRight, BottomBackLeft,  BottomBackRight};

    RubiksFace *TopFace, *BottomFace, *FrontFace, *BackFace, *LeftFace, *RightFace;


    RubiksCube(Model* Arr[26]){
        Top = Arr[0];
        TopFront = Arr[1];
        TopBack = Arr[2];
        TopLeft = Arr[3];
        TopRight = Arr[4];
        TopFrontLeft = Arr[5];
        TopFrontRight = Arr[6];
        TopBackLeft = Arr[7];
        TopBackRight = Arr[8];

        MiddleFront = Arr[9];
        MiddleBack = Arr[10];
        MiddleLeft = Arr[11];
        MiddleRight = Arr[12];
        MiddleFrontLeft = Arr[13];
        MiddleFrontRight = Arr[14];
        MiddleBackLeft = Arr[15];
        MiddleBackRight = Arr[16];

        Bottom = Arr[17];
        BottomFront = Arr[18];
        BottomBack = Arr[19];
        BottomLeft = Arr[20];
        BottomRight = Arr[21];
        BottomFrontLeft = Arr[22];
        BottomFrontRight = Arr[23];
        BottomBackLeft = Arr[24];
        BottomBackRight = Arr[25];

        Model* TopFaceArr[9] = {TopFront, TopBack, TopRight,
                                TopLeft, TopFrontRight, TopFrontLeft,
                                TopBackRight, TopBackLeft, Top};
        TopFace = new RubiksFace(TopFaceArr, 0, 1, 0);

        Model* BottomFaceArr[9] = {BottomFront, BottomBack, BottomLeft,
                                   BottomRight, BottomFrontLeft, BottomFrontRight,
                                   BottomBackLeft, BottomBackRight, Bottom};
        BottomFace = new RubiksFace(BottomFaceArr, 0, -1, 0);

        Model* FrontFaceArr[9] = {TopFront, BottomFront, MiddleFrontLeft,
                                  MiddleFrontRight, TopFrontLeft, TopFrontRight,
                                  BottomFrontLeft, BottomFrontRight, MiddleFront};
        FrontFace = new RubiksFace(FrontFaceArr, 0, 0, 1);

        Model* BackFaceArr[9] = {TopBack, BottomBack, MiddleBackRight,
                                 MiddleBackLeft, TopBackRight, TopBackLeft,
                                 BottomBackRight, BottomBackLeft, MiddleBack};
        BackFace = new RubiksFace(BackFaceArr, 0, 0, -1);

        Model* LeftFaceArr[9] = {TopLeft, BottomLeft, MiddleBackLeft,
                                 MiddleFrontLeft, TopBackLeft, TopFrontLeft,
                                 BottomBackLeft, BottomFrontLeft, MiddleLeft};
        LeftFace = new RubiksFace(LeftFaceArr, -1, 0, 0);

        Model* RightFaceArr[9] = {TopRight, BottomRight, MiddleFrontRight,
                                  MiddleBackRight, TopFrontRight, TopBackRight,
                                  BottomFrontRight, BottomBackRight, MiddleRight};
        RightFace = new RubiksFace(RightFaceArr, 1, 0, 0);
    }

    void draw(){
        Top->draw();
        TopFront->draw();
        TopBack->draw();
        TopLeft->draw();
        TopRight->draw();
        TopFrontLeft->draw();
        TopFrontRight->draw();
        TopBackLeft->draw();
        TopBackRight->draw();

        MiddleFront->draw();
        MiddleBack->draw();
        MiddleLeft->draw();
        MiddleRight->draw();
        MiddleFrontLeft->draw();
        MiddleFrontRight->draw();
        MiddleBackLeft->draw();
        MiddleBackRight->draw();

        Bottom->draw();
        BottomFront->draw();
        BottomBack->draw();
        BottomLeft->draw();
        BottomRight->draw();
        BottomFrontLeft->draw();
        BottomFrontRight->draw();
        BottomBackLeft->draw();
        BottomBackRight->draw();

    }

};

class Animation{

private:

    char step;
    RubiksFace* currentFace;
    //const static char STEP_COUNT = 10;

    Animation(){
        step = 0;
        currentFace = NULL;
    }

    ~Animation() {};

public:

    Animation(Animation const&) = delete;
    Animation& operator= (Animation const&) = delete;

    static Animation& getInstance() {
        static Animation inst;
        return inst;
    }

    void begin(RubiksFace* face){
        if (!step){
            step = 1;
            currentFace = face;
            currentFace->rotate();
            }
    }

    void update() {
        if (step){
            step ++;
            currentFace->rotate();
            if (step >= 10){
                end();
            }
        }
    }

    void end() {
        step = 0;
        currentFace->turnCCW();
        currentFace = nullptr;
    }

};


struct Globals
{
    HINSTANCE hInstance;    // window app instance
    HWND hwnd;      // handle for the window
    HDC   hdc;      // handle to device context
    HGLRC hglrc;    // handle to OpenGL rendering context
    int width, height;      // the desired width and
};
Globals g;

// Function prototypes.
LRESULT CALLBACK WndProc( HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam );
int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR szCmdLine, int iCmdShow );

void draw();
void update();
void init();
void updateInput();
void drawAxis();
void drawXYGrid(float min, float max, float width);



int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR szCmdLine, int iCmdShow ) {

    g.hInstance = hInstance;

#pragma region part 1 - create a window

    WNDCLASS wc;
    wc.cbClsExtra = 0;
    wc.cbWndExtra = 0;
    wc.hbrBackground = (HBRUSH) GetStockObject(BLACK_BRUSH);
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    wc.hInstance = hInstance;
    wc.lpfnWndProc = WndProc;
    wc.lpszClassName = TEXT("Philip");
    wc.lpszMenuName = 0;
    wc.style = CS_HREDRAW | CS_VREDRAW | CS_OWNDC;

    // Register that class with the Windows O/S..
    RegisterClass(&wc);

    RECT rect;
    SetRect(&rect, 50,  // left
            50,  // top
            850, // right
            650); // bottom

    // Save width and height off.
    g.width = rect.right - rect.left;
    g.height = rect.bottom - rect.top;

    // Adjust it.
    AdjustWindowRect(&rect, WS_OVERLAPPEDWINDOW, false);

    g.hwnd = CreateWindow(TEXT("Philip"),
                          TEXT("GL WINDOW!"),
                          WS_POPUP | WS_SIZEBOX | WS_CAPTION  ,
                          rect.left, rect.top,  // adjusted x, y positions
                          rect.right - rect.left, rect.bottom - rect.top,  // adjusted width and height
                          NULL, NULL,
                          hInstance, NULL);

    if( g.hwnd == NULL )
    {
        FatalAppExit( 0, TEXT("CreateWindow() failed!") );
    }

    // and show.
    ShowWindow( g.hwnd, iCmdShow );

#pragma endregion

    g.hdc = GetDC( g.hwnd );

#pragma region part 3 - SET PIXEL FORMAT OF HDC
    PIXELFORMATDESCRIPTOR pfd = { 0 };  // create the pfd,

    pfd.nSize = sizeof( PIXELFORMATDESCRIPTOR );    // just its size
    pfd.nVersion = 1;   // always 1

    pfd.dwFlags = PFD_SUPPORT_OPENGL |  // OpenGL support - not DirectDraw
                  PFD_DOUBLEBUFFER   |  // double buffering support
                  PFD_DRAW_TO_WINDOW;   // draw to the app window, not to a bitmap image

    pfd.iPixelType = PFD_TYPE_RGBA ;    // red, green, blue, alpha for each pixel
    pfd.cColorBits = 24;                // 24 bit == 8 bits for red, 8 for green, 8 for blue.
    // This count of color bits EXCLUDES alpha.

    pfd.cDepthBits = 32;                // 32 bits to measure pixel depth.  That's accurate!

    int chosenPixelFormat = ChoosePixelFormat( g.hdc, &pfd );

    if( chosenPixelFormat == 0 )
    {
        FatalAppExit( 0, TEXT("ChoosePixelFormat() failed!") );
    }

    char b[100];
    sprintf(b, "You got ID# %d as your pixelformat!\n", chosenPixelFormat);
    MessageBoxA( NULL, b, "Your pixelformat", MB_OK );

    int result = SetPixelFormat( g.hdc, chosenPixelFormat, &pfd );

    if (result == NULL)
    {
        FatalAppExit( 0, TEXT("SetPixelFormat() failed!") );
    }
#pragma endregion

#pragma region part 4 - CREATE THE RENDERING CONTEXT

    g.hglrc = wglCreateContext( g.hdc );

#pragma endregion

#pragma region part 5 - CONNECT THE RENDERING CONTEXT WITH THE DEVICE CONTEXT OF THE WINDOW
    wglMakeCurrent( g.hdc, g.hglrc );
#pragma endregion

#pragma region message loop

    init();

    MSG msg;

    bool running = true;
    while( running )
    {
        if( PeekMessage( &msg, NULL, 0, 0, PM_REMOVE ) )
        {
            switch (msg.message )
            {
                case WM_QUIT:
                    running = false;
            }

            TranslateMessage( &msg );
            DispatchMessage( &msg );
            /*
            if (msg.message == WM_KEYDOWN) {
                WPARAM param = msg.wParam;
                char c = MapVirtualKey(param, MAPVK_VK_TO_CHAR);
                update(msg.wParam);
            }
             */
        }
        else
        {
            update();
            draw();
        }
    }
#pragma endregion

    //////////////
    // clean up
#pragma region clean up
    // UNmake your rendering context (make it 'uncurrent')
    wglMakeCurrent( NULL, NULL );

    // Delete the rendering context, we no longer need it.
    wglDeleteContext( g.hglrc );

    // release your window's DC
    ReleaseDC( g.hwnd, g.hdc );
#pragma endregion

    AnimateWindow( g.hwnd, 200, AW_HIDE | AW_BLEND );

    return msg.wParam;

}


static float camRadius = 10;
static float camAngle = M_PI / 3.5;
static float camUpAngle = 0;
static float camHeight = 5;


static Animation& anim = Animation::getInstance();

static Model BottomBack       = Model(draw_Cube_025_Cube_032);
static Model BottomFront      = Model(draw_Cube_024_Cube_031);
static Model TopFront         = Model(draw_Cube_023_Cube_030);
static Model TopBack          = Model(draw_Cube_022_Cube_029);
static Model Bottom           = Model(draw_Cube_021_Cube_028);
static Model Top              = Model(draw_Cube_020_Cube_027);
static Model MiddleFront      = Model(draw_Cube_019_Cube_026);
static Model MiddleBack       = Model(draw_Cube_018_Cube_025);

static Model TopBackLeft      = Model(draw_Cube_017_Cube_024);
static Model TopLeft          = Model(draw_Cube_016_Cube_023);
static Model MiddleLeft       = Model(draw_Cube_015_Cube_022);
static Model MiddleBackLeft   = Model(draw_Cube_014_Cube_021);
static Model MiddleFrontLeft  = Model(draw_Cube_013_Cube_020);
static Model TopFrontLeft     = Model(draw_Cube_012_Cube_019);
static Model BottomBackLeft   = Model(draw_Cube_011_Cube_018);
static Model BottomFrontLeft  = Model(draw_Cube_009_Cube_016);
static Model BottomLeft       = Model(draw_Cube_010_Cube_017);

static Model BottomBackRight  = Model(draw_Cube_008_Cube_009);
static Model BottomRight      = Model(draw_Cube_007_Cube_008);
static Model BottomFrontRight = Model(draw_Cube_006_Cube_007);
static Model TopBackRight     = Model(draw_Cube_005_Cube_006);
static Model MiddleBackRight  = Model(draw_Cube_004_Cube_005);
static Model MiddleFrontRight = Model(draw_Cube_003_Cube_004);
static Model MiddleRight      = Model(draw_Cube_002_Cube_003);
static Model TopRight         = Model(draw_Cube_001_Cube_002);
static Model TopFrontRight    = Model(draw_Cube);

static Model* RubikCubeArr[26] = {&Top, &TopFront, &TopBack, &TopLeft, &TopRight,
                                  &TopFrontLeft, &TopFrontRight, &TopBackLeft, &TopBackRight,

                                  &MiddleFront, &MiddleBack, &MiddleLeft, &MiddleRight,
                                  &MiddleFrontLeft, &MiddleFrontRight, &MiddleBackLeft, &MiddleBackRight,

                                  &Bottom, &BottomFront, &BottomBack, &BottomLeft, &BottomRight,
                                  &BottomFrontLeft, &BottomFrontRight, &BottomBackLeft,  &BottomBackRight};

static RubiksCube rubik = RubiksCube(RubikCubeArr);

void drawAxis(){

    glLineWidth(3);
    glBegin(GL_LINES);
// draw line for x axis
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(100.0, 0.0, 0.0);
// draw line for y axis
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(0.0, 100.0, 0.0);
// draw line for Z axis
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(0.0, 0.0, 100.0);
    glEnd();
}

void drawXYGrid(float min=0, float max=100, float width=2){
    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    for (float x=min; x<=max; x+=width){
        glVertex3f(x, 0.0, min);
        glVertex3f(x, 0.0, max);
    }
    for (float y=min; y<=max; y+=width){
        glVertex3f(min, 0.0, y);
        glVertex3f(max, 0.0, y);
    }
    glEnd();
}

void updateInput(){

    float translation_speed = 0.1f;
    float rotation_speed = M_PI / 72;
    float height_speed = 0.2f;


    if( GetAsyncKeyState( 0x57 ) ) // W key
        camRadius -= translation_speed;

    if( GetAsyncKeyState( 0x53 ) ) // S key
        camRadius += translation_speed ;


    // Translate camera around center
    if( GetAsyncKeyState( 0x44 ) ) // A key
        camAngle -= rotation_speed;

    if( GetAsyncKeyState( 0x41 ) ) // D key
        camAngle += rotation_speed;


    // Rotate camera
    if( GetAsyncKeyState( 0x5A ) ) // Z key
        camUpAngle += rotation_speed;

    if( GetAsyncKeyState( 0x58 ) ) // X key
        camUpAngle -= rotation_speed;

    // Change camera height
    if( GetAsyncKeyState( 0x51 )) // Q key
        camHeight += height_speed;
    if( GetAsyncKeyState( 0x45 )) // E key
        camHeight -= height_speed;

    // Rotate faces of Rubik's cube
    if( GetAsyncKeyState( 0x31)){
        anim.begin(rubik.RightFace);
    }
    if( GetAsyncKeyState( 0x32)){
        anim.begin(rubik.LeftFace);
    }
    if( GetAsyncKeyState( 0x33)){
        anim.begin(rubik.FrontFace);
    }
    if( GetAsyncKeyState( 0x34)){
        anim.begin(rubik.BackFace);
    }
    if( GetAsyncKeyState( 0x35)){
        anim.begin(rubik.TopFace);
    }
    if( GetAsyncKeyState( 0x36)){
        anim.begin(rubik.BottomFace);
    }

}

void init(){

    /*
    // Initialize Free Type library
    FT_Library ft;

    if(FT_Init_FreeType(&ft)) {
        fprintf(stderr, "Could not init freetype library\n");
        return 1;
    }
     */

    //if (!glfwInit())
    //exit(EXIT_FAILURE);


    glClearColor( 0.2, 0.2, 0.2, 0 );
    glEnable(GL_DEPTH_TEST);
    glEnable (GL_BLEND);
    glBlendFunc (GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    //Animation::instance = anim;

}

void update(){

    updateInput();




    anim.update();

}

void draw()
{
    glViewport(0, 0, g.width, g.height);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    gluPerspective(45.0,(float)g.width/(float)g.height, 1, 1000);
    //glOrtho(-(camZ)+camX, camZ+camX, -camZ+camY, camZ+camY, -100.0, 1000.0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    gluLookAt(  cos(camAngle)*camRadius, camHeight, sin(camAngle)*camRadius,
                0, 0, 0,
                sin(camUpAngle), cos(camUpAngle), 0);

    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );

    rubik.draw();

    drawAxis();
    drawXYGrid(-100,100,2);

    //7.  SWAP BUFFERS.
    SwapBuffers(g.hdc);
}


LRESULT CALLBACK WndProc( HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam )
{
    switch( message )
    {
        case WM_CREATE:
            Beep( 2000, 50 );
            return 0;
            break;

        /*
        case WM_PAINT:
        {
            HDC hdc;
            PAINTSTRUCT ps;
            hdc = BeginPaint( hwnd, &ps );
            // don't draw here.  would be waaay too slow.
            // draw in the draw() function instead.
            EndPaint( hwnd, &ps );
        }
            return 0;
            break;
        */

        case WM_KEYDOWN: {
            switch( wparam )
            {
                case VK_ESCAPE:
                    PostQuitMessage( 0 );
                    break;

                default:
                    break;

            }
            return 0;
        }
        case WM_KEYUP:
            switch ( wparam )
            {
                case VK_CONTROL:
                    anim.begin(rubik.TopFace);
            }
            return 0;


        case WM_DESTROY:
            PostQuitMessage( 0 ) ;
            return 0;
            break;
    }

    return DefWindowProc( hwnd, message, wparam, lparam );
}
