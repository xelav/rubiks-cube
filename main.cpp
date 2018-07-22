#include <iostream>

//#include <gl/glew.h>
//#include <GL/glfw3.h>

#include <math.h>
#include <gl/gl.h>
#include <gl/glu.h>
#include "main.h"
#include "rubik.h"

//#include "lib/glm/glm/glm.hpp"

//#include <ft2build.h>
//#include FT_FREETYPE_H

class Model{

public:

    void (*pDraw)();

    float xAngle = 0, yAngle = 0, zAngle = 0, gimbalXAngle = 0;

    Model( void (*pDraw)() ) : xAngle(0), yAngle(0), zAngle(0), pDraw(pDraw) { }

    void draw(){

        glPushMatrix();

        glRotated(xAngle,1,0,0);
        glRotatef(yAngle,0,1,0);
        glRotated(zAngle,0,0,1);
        glRotated(gimbalXAngle,1,0,0);

        pDraw();

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

    void rotate(bool verbose){
        for(int i=0; i<9; i++){

            float alpha  = M_PI*(cubeArr[i]->xAngle/180);
            float beta   = M_PI*(cubeArr[i]->yAngle)/180;
            float gamma  =M_PI*(cubeArr[i]->zAngle)/180;
            float gimbal = M_PI*(cubeArr[i]->gimbalXAngle)/180;

            if (verbose) {
                printf("%d: %f -- %f -- %f        %f\n", i+1, alpha/M_PI, beta/M_PI, gamma/M_PI, gimbal/M_PI);
            }

            cubeArr[i]->xAngle += 90/15 * (dirX * 1 + dirY * 0 + dirZ * 0);
            cubeArr[i]->yAngle += 90/15 * (dirX * 0 + dirY * cos(alpha) * cos(gamma) + dirZ * sin(alpha));
            cubeArr[i]->zAngle += 90/15 * (dirX * 0 + dirY * 0 + dirZ * cos(beta)*cos(alpha) + dirZ * sin(beta)*cos(alpha) * sin(gamma)* sin(gimbal));
            cubeArr[i]->gimbalXAngle += 90/15 * dirZ * cos(M_PI+alpha) * sin(beta);

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
            currentFace->rotate(true);
            }
    }

    void update() {
        // TODO: make time-based
        if (step){
            step ++;
            currentFace->rotate(false);
            if (step >= 15){
                end();
            }
        }
    }

    void end() {
        step = 0;
        currentFace->turnCCW();
        currentFace = nullptr;
        printf(" --- \n\n");
    }

};


void updateInput();
void drawAxis();
void drawXYGrid(float min, float max, float width);
GLuint loadBMP_custom(const char * imagepath);

static float camRadius = 10;
static float camAngle = M_PI / 3.5;
static float camUpAngle = 0;
static float camHeight = 5;

static float lightRadius = 10;
static float lightAngle = -M_PI /2;

static Animation& animation = Animation::getInstance();

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

GLuint loadBMP_custom(const char * imagepath){

    unsigned char header[54];
    unsigned int dataPos;
    unsigned int width, height;
    unsigned int imageSize;
    unsigned int bitsPerPixel, headerSize;

    unsigned char * data;
    unsigned char * qwer;

    FILE * file = fopen( imagepath,"rb");
    if (!file) {
        printf("AA");
        return 0;
    }

    if ( fread(header, 1, 54, file) != 54 ) { // Если мы прочитали меньше 54 байт, значит возникла проблема
        printf("BB");
        return 0;
    }

    if ( header[0]!='B' || header[1]!='M' ){
        printf("CC");
        return 0;
    }

    dataPos        = *(int*)&(header[0x0A]);
    headerSize     = *(int*)&(header[0x0E]);
    imageSize      = *(int*)&(header[0x22]);
    width          = *(int*)&(header[0x12]);
    height         = *(int*)&(header[0x16]);
    bitsPerPixel   = *(short*)&(header[0x1C]);

    if (headerSize != 40){
        printf("DD");
        return 0;
    }
    if (bitsPerPixel != 8){
        printf("EE");
        return 0;
    }

    if (imageSize==0)    imageSize=width*height;
    if (dataPos==0)      dataPos=54;

    // Создаем буфер
    data = new unsigned char [imageSize];

    fseek(file, dataPos, SEEK_SET);
    fread(data, 1, imageSize, file);
    fclose(file);

    qwer = new unsigned char [imageSize*4]; // TODO: rename

    for(int i = 0; i< imageSize; i++) {
        unsigned char c = data[i];
        qwer[i*4   ] = c;
        qwer[i*4 +1] = c;
        qwer[i*4 +2] = c;
        qwer[i*4 +3] = 255;
    }

    // Создадим одну текстуру OpenGL
    GLuint textureID;
    glGenTextures(1, &textureID);
    glBindTexture(GL_TEXTURE_2D, textureID);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);

    GLint FILTER_MODE = GL_NEAREST;

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER,
                    FILTER_MODE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER,
                    FILTER_MODE);

    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width,
                 height, 0, GL_RGBA, GL_UNSIGNED_BYTE,
                 qwer);
}

void openfile() {

    char filename[260];
    OPENFILENAME ofn;
    ZeroMemory( &filename, sizeof( filename ) );
    ZeroMemory( &ofn,      sizeof( ofn ) );
    ofn.lStructSize  = sizeof( ofn );
    ofn.hwndOwner    = NULL;  // If you have a window to center over, put its HANDLE here
    ofn.lpstrFilter  = "Text Files\0*.txt\0Any File\0*.*\0";
    ofn.lpstrFile    = filename;
    ofn.nMaxFile     = MAX_PATH;
    ofn.lpstrTitle   = "Select a BMP texture";
    ofn.Flags        = OFN_DONTADDTORECENT | OFN_FILEMUSTEXIST;

    if (GetOpenFileNameA( &ofn ))
    {
        std::cout << "You chose the file \"" << filename << "\"\n";
        loadBMP_custom(filename);
    }
}

void updateInput(){

    float translation_speed = 0.1f;
    float rotation_speed = M_PI / 72;
    float height_speed = 0.2f;

    // https://msdn.microsoft.com/en-us/library/windows/desktop/dd375731(v=vs.85).aspx

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

    if (GetAsyncKeyState( 0x43)) // C key
        lightAngle += rotation_speed;

    // Rotate faces of Rubik's cube
    if( GetAsyncKeyState( 0x31)){
        animation.begin(rubik.RightFace);
    }
    if( GetAsyncKeyState( 0x32)){
        animation.begin(rubik.LeftFace);
    }
    if( GetAsyncKeyState( 0x33)){
        animation.begin(rubik.FrontFace);
    }
    if( GetAsyncKeyState( 0x34)){
        animation.begin(rubik.BackFace);
    }
    /*
    if( GetAsyncKeyState( 0x35)){
        animation.begin(rubik.TopFace);
    }
    if( GetAsyncKeyState( 0x36)){
        animation.begin(rubik.BottomFace);
    }
     */

}


static GLubyte checkImage[64][64][4];

void makeCheckImage(void)
{
    int i, j, c;
    for (i = 0; i < 64; i++) {
        for (j = 0; j < 64; j++) {
            c = ((((i&0x8)==0)^((j&0x8))==0))*255;
            checkImage[i][j][0] = (GLubyte) c;
            checkImage[i][j][1] = (GLubyte) c;
            checkImage[i][j][2] = (GLubyte) c;
            checkImage[i][j][3] = (GLubyte) 255;
        }
    }
}


void makeCheckImage2(void) // TODO: properly name
{
    int i, j, c;
    for (i = 0; i < 64; i++) {
        for (j = 0; j < 64; j++) {
            c =  (i*j % 2) * 255;
            checkImage[i][j][0] = (GLubyte) c;
            checkImage[i][j][1] = (GLubyte) c;
            checkImage[i][j][2] = (GLubyte) c;
            checkImage[i][j][3] = (GLubyte) 255;
        }
    }
}

void init(float window_width, float window_height){

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

    GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
    GLfloat mat_shininess[] = { 50.0 };

    glClearColor( 0.2, 0.2, 0.2, 0 );

    glShadeModel (GL_SMOOTH); // TODO

    glEnable(GL_COLOR_MATERIAL);

    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);

    glEnable(GL_DEPTH_TEST);
    glEnable (GL_BLEND);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);

    glEnable(GL_NORMALIZE);
    glEnable(GL_AUTO_NORMAL);

    glEnable (GL_TEXTURE_2D);

    GLuint Texture = loadBMP_custom("2.bmp");

    glBlendFunc (GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    glViewport(0, 0, window_width, window_height);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    gluPerspective(45.0, window_width/window_height, 1, 1000);

}

void update(){

    updateInput();

    animation.update();

}

void drawLight(){
    GLfloat light_ambient[] = { 0.0, 0.0, 0.0, 1.0 };
    GLfloat light_diffuse[] = { 1.0, 1.0, 1.0, 1.0 };
    GLfloat light_specular[] = { 1.0, 1.0, 1.0, 1.0 };
    GLfloat light_position[] = { cos(lightAngle)*lightRadius, 1.0, sin(lightAngle)*lightRadius, 0.0 };

    //glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
    //glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
    //glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glPointSize(10);
    glBegin(GL_POINTS);
    glColor3f(1.0,1.0,1.0);
    glNormal3f(0.0,1.0,0.0);
    glVertex3f(light_position[0], light_position[1], light_position[2]); // fixme
    glEnd();
}

void draw()
{

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    gluLookAt(  cos(camAngle)*camRadius, camHeight, sin(camAngle)*camRadius,
                0, 0, 0,
                sin(camUpAngle), cos(camUpAngle), 0);

    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );

    drawLight();

    rubik.draw();

    drawAxis();
    drawXYGrid(-100,100,2);
}


LRESULT CALLBACK WndProc( HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam )
{
    switch( message )
    {
        case WM_CREATE:
            Beep( 2000, 50 );
            return 0;
            break;

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
                    animation.begin(rubik.TopFace);
                    break;
                case VK_F1:;
                    openfile();
            }
            return 0;


        case WM_DESTROY:
            PostQuitMessage( 0 ) ;
            return 0;
            break;
    }

    return DefWindowProc( hwnd, message, wparam, lparam );
}