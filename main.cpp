#include <iostream>

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <gl/gl.h>
#include <gl/glu.h>
#include "rubik.h"

/////////////////////
// GLOBALS
//
/// Define a structure to hold all
/// of the global variables of this app.
struct Globals
{
    HINSTANCE hInstance;    // window app instance

    HWND hwnd;      // handle for the window

    HDC   hdc;      // handle to device context

    HGLRC hglrc;    // handle to OpenGL rendering context

    int width, height;      // the desired width and
    // height of the CLIENT AREA
    // (DRAWABLE REGION in Window)
};


///////////////////////////
// GLOBALS
// declare one struct Globals called g;
Globals g;
//
///////////////////////////


// Function prototypes.
LRESULT CALLBACK WndProc( HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam );
int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR szCmdLine, int iCmdShow );
void draw();            // drawing function containing OpenGL function calls

int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR szCmdLine, int iCmdShow ) {
    //////////////////
    // First we'll start by saving a copy of
    // the hInstance parameter inside our
    // "glob" of globals "g":
    g.hInstance = hInstance;

#pragma region part 1 - create a window
    // The next few lines you should already
    // be used to:  create a WNDCLASS
    // that describes the properties of
    // the window we're going to soon create.
    // A.  Create the WNDCLASS
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

    /////////////////
    // Ok, AT THIS POINT, we'd normally
    // just go ahead and call CreateWindow().
    // And we WILL call CreateWindow(), but
    // there is something I must explain to
    // you first.  That thing is the RECT structure.

    /////////////////
    // RECT:
    //
    // A RECT is just a C struct meant to represent
    // a rectangle.
    //
    // The RECT structure WILL DESCRIBE EXACTLY WHERE
    // AND HOW WE WANT OUR WINDOW TO APPEAR WHEN WE
    // CREATE IT.
    //
    //         TOP
    //       --------
    //       |      |
    // LEFT  |      | RIGHT
    //       --------
    //        BOTTOM
    //
    // So, what we do is, we create the RECT
    // struct for our window as follows:
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

    // AdjustWindowRect() expands the RECT
    // so that the CLIENT AREA (drawable region)
    // has EXACTLY the dimensions we specify
    // in the incoming RECT.

    // If you didn't just understand that, understand
    // this:  "you have to call AdjustWindowRect()",
    // and move on.  Its not THAT important, but its
    // good for the performance of your app.

    ///////////////////
    // NOW we call CreateWindow, using
    // that adjusted RECT structure to
    // specify the width and height of the window.
    g.hwnd = CreateWindow(TEXT("Philip"),
                          TEXT("GL WINDOW!"),
                          WS_POPUP | WS_SIZEBOX | WS_CAPTION  ,
                          rect.left, rect.top,  // adjusted x, y positions
                          rect.right - rect.left, rect.bottom - rect.top,  // adjusted width and height
                          NULL, NULL,
                          hInstance, NULL);

    // check to see that the window
    // was created successfully!
    if( g.hwnd == NULL )
    {
        FatalAppExit( 0, TEXT("CreateWindow() failed!") );
    }

    // and show.
    ShowWindow( g.hwnd, iCmdShow );

#pragma endregion

    g.hdc = GetDC( g.hwnd );

#pragma region part 3 - SET PIXEL FORMAT OF HDC
    //3.  SET PIXEL FORMAT OF HDC.
    //
    // We now have to set up the PIXELFORMAT
    // of our HDC.

    // A PIXEL FORMAT just describes the
    // "qualities" that each pixel in the
    // window will have.  Do you want your
    // OpenGL app to use 24 bit color
    // ("true color" -- really high
    // quality!)?  Or 16 bit color (can look
    // a bit washed out)?

    // There are 3 substeps here:
    //    A> create the PFD and set it up to describe
    //       the pixel format we DESIRE (dream of having!)
    //
    //    B> call ChoosePixelFormat() to make windows
    //       choose us the ID of the appropriate pixel format that
    //       is CLOSEST to our dream pixel format.
    //
    //    C> Call SetPixelFormat() using the integer ID number
    //       that ChoosePixelFormat() returned to us in step B>

    // So let's do that:

    ////////////////////
    // A> CREATE PFD:
    PIXELFORMATDESCRIPTOR pfd = { 0 };  // create the pfd,
    // and start it out with ALL ZEROs in ALL
    // of its fields.

    // A good description of the PIXELFORMATDESCRIPTOR
    // struct is under the documentation
    // for the ChoosePixelFormat() function:
    // http://msdn2.microsoft.com/en-us/library/ms537556(VS.85).aspx

    // If you look at the docs, MANY of the fields
    // are "NOT USED" and REMAIN 0.

    // That should be something of a relief to you!
    // Look at the number of fields in this beast!

    // So we set only the fields of the pfd we care about:
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

    /////////////////
    // C> So finally, we call SetPixelFormat() using the integer ID number
    // that ChoosePixelFormat() returned to us previously.
    int result = SetPixelFormat( g.hdc, chosenPixelFormat, &pfd );

    if (result == NULL)
    {
        FatalAppExit( 0, TEXT("SetPixelFormat() failed!") );
    }
    // and that's all there is to setting
    // the pixel format!
    //////////
#pragma endregion

#pragma region part 4 - CREATE THE RENDERING CONTEXT
    //4.  CREATE RENDERING CONTEXT (HGLRC).

    // What's a rendering context?
    // Its the "surface" that OpenGL
    // will DRAW to.

    // The HGLRC will be created
    // such that it is COMPATIBLE
    // with the hdc.

    g.hglrc = wglCreateContext( g.hdc );
    // Created the rendering context
    // and saved handle to it in global 'g'.
    //
    // Wasn't that awfully easy to create
    // such a complicated sounding thing?
    ///////////////
#pragma endregion

#pragma region part 5 - CONNECT THE RENDERING CONTEXT WITH THE DEVICE CONTEXT OF THE WINDOW
    //5.  CONNECT THE RENDER CONTEXT (HGLRC)
    //    WITH THE DEVICE CONTEXT (HDC) OF WINDOW.
    wglMakeCurrent( g.hdc, g.hglrc );

    //
    // OPEN GL INIT COMPLETED!!
    ////////////////////////////
#pragma endregion

#pragma region message loop
    MSG msg;

    while( 1 )
    {
        if( PeekMessage( &msg, NULL, 0, 0, PM_REMOVE ) )
        {
            if( msg.message == WM_QUIT )
            {
                break;
            }

            TranslateMessage( &msg );
            DispatchMessage( &msg );
        }
        else
        {
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

    // and a cheesy fade exit
    AnimateWindow( g.hwnd, 200, AW_HIDE | AW_BLEND );

    return msg.wParam;

}


static int camRadius = 10;
static float camAngle = M_PI / 3.5;
static float camUpAngle = M_PI/2;
static int camHeight = 5;
static int camX = 0;
static int camY = 0;
static int camZ = 10;
void draw()
{
    // 1. set up the viewport
    glViewport(0, 0, g.width, g.height); // set viewport
    // to be the whole width and height
    // of the CLIENT AREA (drawable region) of the window,
    // (the CLIENT AREA excludes the titlebar and the
    // maximize/minimize buttons).

    // 2. projection matrix
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //gluPerspective(45.0,(float)g.width/(float)g.height, 1, 1000);
    //gluOrtho2D(-(float)g.width/(float)g.height, (float)g.width/(float)g.height, -1.0, 1.0);
    glOrtho(-(camZ)+camX, camZ+camX, -camZ+camY, camZ+camY, -10.0, 1000.0);

    // 3. viewing transformation
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    gluLookAt(  cos(camAngle)*camRadius, camHeight, sin(camAngle)*camRadius,
                //10, 10, 10,
                0, 0, 0,
                sin(camUpAngle), cos(camUpAngle), 0);

    // 4. modelling transformation and drawing
    glClearColor( 0.2, 0.2, 0.2, 0 );
    glEnable(GL_DEPTH_TEST);
    glEnable (GL_BLEND);
    glBlendFunc (GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );


    draw_Cube_025_Cube_032();
    draw_Cube_024_Cube_031();
    draw_Cube_023_Cube_030();
    draw_Cube_022_Cube_029();
    draw_Cube_021_Cube_028();
    draw_Cube_020_Cube_027();
    draw_Cube_019_Cube_026();
    draw_Cube_018_Cube_025();
    draw_Cube_017_Cube_024();
    draw_Cube_016_Cube_023();
    draw_Cube_015_Cube_022();
    draw_Cube_014_Cube_021();
    draw_Cube_013_Cube_020();
    draw_Cube_012_Cube_019();
    draw_Cube_011_Cube_018();
    draw_Cube_010_Cube_017();
    draw_Cube_009_Cube_016();
    draw_Cube_008_Cube_009();
    draw_Cube_007_Cube_008();
    draw_Cube_006_Cube_007();
    draw_Cube_005_Cube_006();
    draw_Cube_004_Cube_005();
    draw_Cube_003_Cube_004();
    draw_Cube_002_Cube_003();
    draw_Cube_001_Cube_002();
    draw_Cube();


    //7.  SWAP BUFFERS.
    SwapBuffers(g.hdc);
    // Its important to realize that the backbuffer
    // is intelligently managed by the HDC ON ITS OWN,
    // so all's you gots to do is call SwapBuffers
    // on the HDC of your window.
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
            Beep( 50, 50 );
            switch( wparam )
            {
                case VK_ESCAPE:
                    PostQuitMessage( 0 );
                    break;
                case 0x41:
                    camX -= 1;
                    break;
                case 0x44:
                    camX += 1;
                    break;
                case 0x57:
                    camY += 1;
                    break;
                case 0x53:
                    camY -= 1;
                    break;
                case 0x5A: //Z
                    camUpAngle += M_PI / 12;
                    break;
                case 0x58: // X
                    camUpAngle -= M_PI / 12;
                    break;
                case 0x51: //Q
                    camZ -= 1;
                    break;
                case 0x45: //E
                    camZ += 1;
                    break;
                default:

                    break;
            }
            return 0;
        }

        case WM_DESTROY:
            PostQuitMessage( 0 ) ;
            return 0;
            break;
    }

    return DefWindowProc( hwnd, message, wparam, lparam );
}
