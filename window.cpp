//
// Created by Admin on 08.11.2017.
//
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <gl/gl.h>
#include <ntdef.h>
#include <ctime>
#include <math.h>

#include "main.h"

#include <iostream>


struct Globals
{
    HINSTANCE hInstance;    // window app instance
    HWND hwnd;      // handle for the window
    HDC   hdc;      // handle to device context
    HGLRC hglrc;    // handle to OpenGL rendering context
    int width, height;      // the desired width and
};
Globals g;



LRESULT CALLBACK WndProc( HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam );
int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR szCmdLine, int iCmdShow );


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

    init(g.width, g.height);

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
        double start = std::clock();

        update();
        draw();
        SwapBuffers(g.hdc);

        //printf("%f\n", std::clock()-start);
        _sleep(abs(1000/60 - (std::clock()-start))); // TODO:remove magic
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

