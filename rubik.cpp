#include "rubik.h"
#include <GL/gl.h>


class Color{
    private:
        float r;
        float g;
        float b;
        float a;

    public:
        Color(float r, float g, float b, float a){
            this->r = r;
            this->g = g;
            this->b = b;
            this->a = a;
        }

        float getR(){return r;};
        float getG(){return g;};
        float getB(){return b;};
        float getA(){return a;};
};
Color Black = Color(0.005754, 0.005754, 0.005754, 1);
Color Blue = Color(0.000000, 0.000000, 0.800000, 1);
Color Green = Color(0.000000, 0.800000, 0.003228, 1);
Color Orange = Color(0.800000, 0.210742, 0.000000, 1);
Color Red = Color(0.800000, 0.000000, 0.000000, 1);
Color White = Color(0.800000, 0.800000, 0.800000, 1);
Color Yellow = Color(0.800000, 0.800000, 0.000000, 1);


void draw_Cube_025_Cube_032() {

	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-1.03,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.899999,-3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.899999,-3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,-3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,-3.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-2.93,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-3.03,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,-3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,-2.93,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,-3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,-3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,-2.93,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.93,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-1.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-1.03,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.899999,-3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.899999,-3.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-2.93,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-3.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-3.03,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-2.93,-3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,-2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,-3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.899999,-3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.899999,-2.93,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-1.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-1.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-1.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-1.03,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-1.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-1.03,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-3.03,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-3.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,-3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,-2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.899999,-2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-1.125,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-1.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-1.03,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-3.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-3.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-3.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-3.03,-3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.93,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.93,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.03,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-1.03,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,-2.93,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,-2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.93,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.03,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-1.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-1.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-1.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-2.93,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.899999,-3.03,-1.125);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-0.899999,-3.04,-1.125);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(0.905,-3.04,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.93,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.93,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.93,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.93,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.93,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.93,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-1.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-1.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-1.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-1.03,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.93,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.93,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-1.03,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-0.9,-1.125,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-0.9,-2.93,-3.039999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-2.93,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-1.125,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,-3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,-2.93,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-3.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.899999,-3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,-3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-1.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-1.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-1.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.899999,-2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.899999,-3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-2.93,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.93,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-2.93,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-1.125,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-3.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-3.03,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-3.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-3.03,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.899999,-2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-1.125,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.93,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-3.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-2.93,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-1.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-1.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-1.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-2.93,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-2.93,-3.029999);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-0.9,-2.93,-3.039999);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(0.905,-2.93,-3.04);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(0.905,-2.93,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(0.905,-1.125,-3.04);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-2.93,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,-2.93,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(0.905,-1.125,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-0.9,-1.125,-3.04);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-1.125,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(0.905,-3.04,-1.125);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(0.905,-3.04,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-3.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-3.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.899999,-3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-3.03,-2.93);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-0.9,-3.04,-2.93);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-0.899999,-3.04,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(0.905,-3.04,-2.930001);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-0.9,-3.04,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,-3.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,-3.03,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Yellow.getR(),Yellow.getG(),Yellow.getB(),Yellow.getA());
	
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(0.905,-3.04,-2.930001);
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(0.905,-3.04,-1.125);
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(-0.899999,-3.04,-1.125);
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(-0.9,-3.04,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Orange.getR(),Orange.getG(),Orange.getB(),Orange.getA());
	
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(0.905,-1.125,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(0.905,-2.93,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(-0.9,-2.93,-3.039999);
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(-0.9,-1.125,-3.04);
	
	glEnd();
	
	};

void draw_Cube_024_Cube_031() {

	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.03,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.899999,-3.03,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.899999,-3.03,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,-3.03,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,-3.03,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-2.93,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-3.03,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.03,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.93,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,-2.93,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,-3.03,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,-3.03,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,-2.93,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-2.93,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905001,-3.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905001,-1.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905001,-1.03,1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905001,-3.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905001,-3.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.899999,-3.03,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.899999,-3.03,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-2.93,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-3.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-3.03,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-2.93,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,-2.93,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,-3.03,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.899999,-3.03,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.899999,-2.93,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.03,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.03,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-3.03,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-3.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.03,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,-2.93,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.899999,-2.93,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.125,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.125,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.125,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.03,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-3.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-3.03,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-3.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-3.03,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.93,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.03,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.93,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.125,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.03,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,-2.93,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,-2.93,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.93,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.93,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905001,-1.03,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905001,-1.125,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-2.93,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.125,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-2.93,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.93,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905001,-3.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.899999,-3.03,1.124999);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(0.899999,-3.04,1.124999);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-0.905001,-3.04,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.125,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905001,-1.03,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905001,-1.125,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.125,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905001,-1.125,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905001,-1.03,1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.125,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.03,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(0.9,-1.125,3.04);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(0.9,-2.93,3.039999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-2.93,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.125,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.93,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,-3.03,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,-2.93,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-3.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.899999,-3.03,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,-3.03,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.03,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.03,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905001,-1.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.899999,-2.93,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.899999,-3.03,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905001,-3.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-2.93,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-2.93,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.125,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-3.03,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-3.03,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905001,-3.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905001,-3.03,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905001,-3.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-3.03,2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.125,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.899999,-2.93,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-2.93,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905001,-1.125,1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-3.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-2.93,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905001,-1.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905001,-1.03,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-2.93,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-2.93,3.029999);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(0.9,-2.93,3.039999);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-0.905,-2.93,3.04);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-0.905,-2.93,3.04);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-0.905,-1.125,3.04);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.125,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-2.93,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.93,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,-2.93,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-0.905,-1.125,3.04);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(0.9,-1.125,3.04);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.125,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.125,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-0.905001,-3.04,1.125);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-0.905,-3.04,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-3.03,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905001,-3.03,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.899999,-3.03,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-3.03,2.93);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(0.9,-3.04,2.93);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(0.899999,-3.04,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-0.905,-3.04,2.930001);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(0.9,-3.04,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-3.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-3.03,2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Yellow.getR(),Yellow.getG(),Yellow.getB(),Yellow.getA());
	
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-0.905,-3.04,2.930001);
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(-0.905001,-3.04,1.125);
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(0.899999,-3.04,1.124999);
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(0.9,-3.04,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Red.getR(),Red.getG(),Red.getB(),Red.getA());
	
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-0.905,-1.125,3.04);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(-0.905,-2.93,3.04);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(0.9,-2.93,3.039999);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(0.9,-1.125,3.04);
	
	glEnd();
	
	};

void draw_Cube_023_Cube_030() {

	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.125,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.125,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.03,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.030001,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.125,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.03,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.03,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.125,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900002,3.03,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900002,3.03,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000002,3.03,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000002,3.03,2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.125,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.125,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.03,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.03,2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.030001,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.030001,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.030001,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.030001,2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125002,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125002,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.030002,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.030002,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.125002,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.125,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.030001,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.030002,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.125001,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.030001,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.03,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.125,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904998,3.030002,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904998,3.030002,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900002,3.03,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900002,3.03,2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.03,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.03,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.03,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.03,2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,3.030001,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,3.030001,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.930001,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.930001,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,3.030001,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,3.03,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,2.930001,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,2.930001,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,3.03,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,3.03,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,2.930001,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,2.930001,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900002,3.03,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900002,2.93,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000002,2.93,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000002,3.03,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.03,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.03,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.03,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.030001,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,3.030001,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,3.030001,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,3.03,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,3.03,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904998,3.030002,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,2.930002,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900002,2.93,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900002,3.03,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000002,3.03,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000002,3.03,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000002,2.93,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000002,2.93,2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999998,3.030002,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999998,3.030002,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.930002,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.930002,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.03,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.03,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.030001,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.030001,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.125,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.125,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.03,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.03,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,3.03,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000002,3.03,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000002,2.93,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,2.930001,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125001,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125001,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.030001,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.030001,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,2.930001,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,2.930001,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.125,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.125002,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.030002,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.030001,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.030001,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.030002,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,3.03,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900002,3.03,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000002,3.03,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,3.03,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.125001,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.125,3.029999);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(0.9,1.125,3.039999);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-0.905,1.125001,3.039999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999998,3.030002,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,3.030001,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.930001,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.930002,2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.930002,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.930002,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125001,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125001,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,2.930001,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,2.930001,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.125,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.125,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125001,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125002,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.030002,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.030001,2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,3.03,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,3.03,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,2.930001,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,2.930001,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,3.03,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,3.03,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,3.03,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,3.03,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.125,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.125,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.03,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.03,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.030002,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.030002,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.030002,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.030002,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.030001,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.030001,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.030002,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.030002,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.930002,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.930001,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125002,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125001,2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,3.030001,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,3.030001,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,3.030001,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,3.030001,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(0.900001,3.040001,1.124999);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(0.900002,3.04,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900002,3.03,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,3.03,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000002,2.93,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000002,2.93,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.125,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.125,2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.930001,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.930001,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125002,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125002,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900002,2.93,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.125,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.125,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000002,2.93,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,2.930001,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,2.930001,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.125,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.125,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.930001,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,2.930001,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.125002,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125002,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.03,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.03,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.030001,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.030001,2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,3.030001,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999998,3.030002,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904998,3.030002,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,3.030001,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999998,3.030002,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.930002,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,2.930002,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904998,3.030002,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125001,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.030001,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.030001,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.125001,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.930002,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125001,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.125001,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,2.930002,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.030001,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.03,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.030001,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.030002,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999998,3.030002,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999998,3.030002,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904998,3.030002,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904998,3.030002,2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,3.030001,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,3.030001,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,2.930001,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.930001,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125002,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.125002,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.030002,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.030002,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904998,3.030002,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900002,3.03,2.929999);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(0.900002,3.04,2.929999);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-0.904998,3.040002,2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-0.904998,3.040002,2.929999);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-0.904999,3.040002,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,3.030001,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904998,3.030002,2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.125,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,2.930001,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000002,2.93,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.125,2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-0.904999,3.040002,1.124999);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(0.900001,3.040001,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,3.03,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,3.030001,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-0.905,1.125001,3.039999);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-0.904999,2.930002,3.039999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,2.930002,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.125001,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.125,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900002,2.93,3.029999);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(0.900002,2.93,3.039999);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(0.9,1.125,3.039999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-0.904999,2.930002,3.039999);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(0.900002,2.93,3.039999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900002,2.93,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,2.930002,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(White.getR(),White.getG(),White.getB(),White.getA());
	
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-0.904999,3.040002,1.124999);
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(-0.904998,3.040002,2.929999);
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(0.900002,3.04,2.929999);
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(0.900001,3.040001,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Red.getR(),Red.getG(),Red.getB(),Red.getA());
	
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-0.904999,2.930002,3.039999);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(-0.905,1.125001,3.039999);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(0.9,1.125,3.039999);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(0.900002,2.93,3.039999);
	
	glEnd();
	
	};

void draw_Cube_022_Cube_029() {

	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,1.124999,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,1.029999,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.899999,1.124999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.899999,1.029999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,1.029999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,1.124999,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,3.029999,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,3.029999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,3.029999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,3.029999,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,1.124999,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,1.124999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,1.029999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,1.029999,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,1.029999,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,1.029999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.029999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.029999,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.125,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905001,1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,1.124999,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,1.029999,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905001,1.03,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,1.124999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,1.029999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.899999,1.029999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.899999,1.124999,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,3.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,3.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,3.029999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,3.029999,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,1.029999,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,1.029999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.899999,1.029999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.899999,1.029999,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,3.029999,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,3.029999,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,2.929999,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,2.929999,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905001,3.029999,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.899999,3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.899999,2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905001,2.929999,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.899999,3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.899999,2.93,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,3.029999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,2.929999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,2.929999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,3.029999,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,1.029999,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.899999,1.029999,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,1.029999,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905001,3.029999,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905001,3.029999,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.899999,3.03,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,3.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,2.93,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,2.929999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,3.029999,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,3.029999,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,3.029999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,2.929999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,2.929999,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,3.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,3.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,2.93,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,2.93,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,1.029999,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,1.029999,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,1.124999,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,1.029999,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,3.029999,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,2.929999,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.93,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.124999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.124999,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.029999,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.029999,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905001,2.929999,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.899999,2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,1.124999,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905001,1.125,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905001,1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,1.029999,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.029999,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,3.029999,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,3.029999,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,3.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,1.124999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.899999,1.124999,-3.03);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-0.899999,1.124999,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(0.905,1.124999,-3.04);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,3.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,3.029999,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,2.929999,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,2.93,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,2.93,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,2.93,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.124999,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.124999,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.93,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.124999,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.125,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.029999,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.93,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.93,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.899999,3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,3.03,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.03,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905001,1.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905001,1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.03,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,1.029999,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,1.029999,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905001,1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905001,1.03,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,2.93,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,2.929999,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.125,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.124999,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,3.029999,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,3.029999,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905001,3.029999,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905001,3.029999,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-0.9,3.039999,-1.125);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-0.9,3.039999,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,3.029999,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,3.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,2.929999,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,2.929999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,1.124999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,1.124999,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,2.929999,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,2.929999,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.125,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,2.929999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.899999,1.124999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,1.124999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,2.929999,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.899999,2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,1.124999,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,2.929999,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905001,2.929999,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905001,1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.125,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.899999,1.029999,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.899999,1.029999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,1.029999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,1.029999,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,3.029999,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,3.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,3.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905001,3.029999,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,3.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,2.93,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,2.93,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,3.03,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.124999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.029999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,1.029999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,1.124999,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,2.93,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.124999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,1.124999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,2.93,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,1.029999,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.899999,1.029999,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,1.029999,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905001,1.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,3.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,3.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,3.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,3.03,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,3.029999,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905001,3.029999,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905001,2.929999,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,2.929999,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905001,1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905001,1.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.03,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,3.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,3.029999,-2.930001);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-0.9,3.039999,-2.930001);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(0.905,3.04,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(0.905,3.04,-2.930001);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(0.905001,3.039999,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905001,3.029999,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,3.03,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.93,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,2.929999,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,1.124999,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(0.905001,3.039999,-1.125);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-0.9,3.039999,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905001,3.029999,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(0.905,1.124999,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(0.905,2.93,-3.04);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,2.93,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,1.124999,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.899999,1.124999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,2.929999,-3.03);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-0.9,2.929999,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-0.899999,1.124999,-3.04);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(0.905,2.93,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-0.9,2.929999,-3.04);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.9,2.929999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.905,2.93,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Orange.getR(),Orange.getG(),Orange.getB(),Orange.getA());
	
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(0.905,2.93,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(0.905,1.124999,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(-0.899999,1.124999,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(-0.9,2.929999,-3.04);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(White.getR(),White.getG(),White.getB(),White.getA());
	
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(0.905001,3.039999,-1.125);
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(0.905,3.04,-2.930001);
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(-0.9,3.039999,-2.930001);
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(-0.9,3.039999,-1.125);
	
	glEnd();
	
	};

void draw_Cube_021_Cube_028() {

	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.124999,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.029999,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.029999,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.124999,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-3.029999,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.029999,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.029999,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-3.029999,1.000001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.124999,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.124999,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.029999,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.029999,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.03,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.030001,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.030001,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.030001,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.029999,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.124999,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-3.03,-0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.03,-0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.029999,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-3.029999,0.900001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.029999,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.029999,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.029999,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.029999,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-2.93,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.029999,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.93,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.93,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.029999,1.000001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.029999,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.029999,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.03,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-3.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-3.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.03,-0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.930001,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.93,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.029999,0.900001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-3.029999,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.029999,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.93,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-2.93,1.000001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.03,-0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-3.03,-0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-2.930001,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.930001,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.124999,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.029999,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.03,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-3.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-3.029999,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-2.93,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-2.93,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.030001,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.030001,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-3.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-3.029999,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-3.029999,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-3.03,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-3.03,-0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-2.930001,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.930001,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-2.930001,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.030001,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.03,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-3.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-3.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-3.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.030001,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.030001,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.030001,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.030001,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.030001,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.030001,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-2.930001,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.125,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-3.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-0.905,-3.04,0.9);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(0.9,-3.039999,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-3.029999,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-3.03,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-2.93,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.93,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.124999,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.124999,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.125,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.93,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.124999,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.124999,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.93,1.000001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.029999,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.029999,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.03,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-3.03,-0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-3.03,-0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-3.03,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.03,-0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.930001,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.930001,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.03,-0.904999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.930001,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.930001,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.029999,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.030001,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-3.03,-0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.03,-0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-3.03,-0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-3.03,-0.904999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-3.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-2.93,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.125,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.030001,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.030001,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-3.03,-0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-3.029999,0.900001);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(0.9,-3.039999,0.900001);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(0.9,-3.04,-0.904999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(0.9,-3.04,-0.904999);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-0.905,-3.04,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-3.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-3.03,-0.904999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-2.93,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.124999,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-0.905,-3.04,-0.905);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-0.905,-3.04,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-3.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-3.03,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.930001,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.125,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.124999,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-2.93,0.900001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Yellow.getR(),Yellow.getG(),Yellow.getB(),Yellow.getA());
	
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-0.905,-3.04,-0.905);
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(0.9,-3.04,-0.904999);
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(0.9,-3.039999,0.900001);
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(-0.905,-3.04,0.9);
	
	glEnd();
	
	};

void draw_Cube_020_Cube_027() {

	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.03,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.124999,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.029999,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.029999,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.124999,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,3.029999,-0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,3.029999,-0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,3.029999,-1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,3.029999,-1.000001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,1.124999,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.124999,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.029999,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,1.029999,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.03,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.030001,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.030001,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.030001,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.125,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.029999,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.124999,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,3.03,0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,3.03,0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,3.029999,-0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,3.029999,-0.900001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,1.029999,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.029999,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.029999,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,1.029999,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,3.03,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,3.03,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.93,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,2.93,0.999999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,3.03,0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,3.03,-0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.93,-0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.93,0.904999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,3.03,-0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,3.03,-1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.93,-1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.93,-0.900001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,3.029999,-0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,2.929999,-0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,2.929999,-1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,3.029999,-1.000001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,1.029999,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,1.029999,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.03,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,3.03,0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,3.03,0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,3.03,-0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,3.03,-0.900001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,3.03,0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,2.93,0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,2.929999,-0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,3.029999,-0.900001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,3.029999,-1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,3.029999,-1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,2.929999,-1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,2.929999,-1.000001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,3.03,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,3.03,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,2.93,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,2.93,0.999999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.03,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,1.124999,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,1.029999,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.03,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,3.03,-1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,3.029999,-1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,2.929999,-1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,2.93,-1.000001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.03,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.93,0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.93,-0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.030001,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.030001,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,3.03,-0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,3.029999,-0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,3.029999,-1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,3.03,-1.000001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,3.03,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,3.03,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,2.93,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,2.93,0.999999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,2.93,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,2.93,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.125,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.93,-1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,2.93,-1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.030001,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.03,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,3.03,-1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,3.03,-1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,2.93,-1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.93,-1.000001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,3.03,-0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,3.03,-0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,3.03,-1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,3.03,-1.000001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.03,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.030001,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.030001,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.030001,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.030001,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.030001,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.030001,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,2.93,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,2.93,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.125,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,3.03,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,3.03,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,3.03,0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,3.03,0.904999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-0.904999,3.04,-0.900001);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(0.900001,3.039999,-0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,3.029999,-0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,3.03,-0.900001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,2.929999,-1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,2.929999,-1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.124999,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,1.124999,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,2.93,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.93,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.125,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,2.929999,-0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.124999,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.124999,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,2.929999,-1.000001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.93,-0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.93,-1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.93,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.93,0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,1.029999,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.029999,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.03,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,3.03,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,3.03,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,3.03,0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,3.03,0.904999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,3.03,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,2.93,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,2.93,0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,3.03,0.904999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.125,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,2.93,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.125,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,2.93,0.904999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,1.029999,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.030001,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,3.03,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,3.03,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,3.03,0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,3.03,0.904999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,3.03,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,3.03,0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.93,0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,2.93,0.999999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.125,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.030001,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.030001,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,3.03,0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,3.029999,-0.900001);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(0.900001,3.039999,-0.900001);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(0.900001,3.04,0.904999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(0.900001,3.04,0.904999);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-0.904999,3.04,0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,3.03,0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,3.03,0.904999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,2.93,-1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,2.929999,-1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,1.124999,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-0.904999,3.04,0.904999);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-0.904999,3.04,-0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,3.03,-0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,3.03,0.904999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,2.93,0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.125,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.124999,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,2.929999,-0.900001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(White.getR(),White.getG(),White.getB(),White.getA());
	
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-0.904999,3.04,0.904999);
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(0.900001,3.04,0.904999);
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(0.900001,3.039999,-0.900001);
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(-0.904999,3.04,-0.900001);
	
	glEnd();
	
	};

void draw_Cube_019_Cube_026() {

	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900001,-1.0,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000001,-1.0,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000001,-1.0,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900001,-1.0,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900001,1.0,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900001,1.0,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000001,1.0,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000001,1.0,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900002,0.9,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900002,1.0,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000003,1.0,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000003,0.9,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000001,0.9,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000001,1.0,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000001,1.0,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000001,0.9,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904999,0.9,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904999,1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,0.9,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,-0.905,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,-1.0,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,-1.0,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,-0.905,1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904999,-1.0,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900001,-1.0,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900001,-1.0,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904999,-1.0,1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904999,1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904999,1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900001,1.0,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900001,1.0,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904998,0.9,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904998,1.0,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900002,1.0,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900002,0.9,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000001,0.9,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000001,1.0,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900001,1.0,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900001,0.9,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999998,-0.905,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999998,-1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999998,-1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999998,-0.905,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904998,-1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900002,-1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900002,-1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904998,-1.0,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900002,-1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000002,-1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000002,-1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900002,-1.0,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900002,1.0,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900002,1.0,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000002,1.0,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000003,1.0,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000001,-0.905,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000001,0.9,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900001,0.9,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900001,-0.905,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904998,-1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904998,-0.905,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900002,-0.905,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900002,-1.0,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904998,1.0,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904998,1.0,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900002,1.0,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900002,1.0,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000003,0.9,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000003,1.0,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000002,1.0,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000002,0.9,2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999998,1.0,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999998,0.9,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999998,0.9,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999998,1.0,2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000001,-1.0,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000001,-0.905,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900001,-0.905,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900001,-1.0,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000001,-0.905,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000001,0.9,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000001,0.9,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000001,-0.905,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000002,-0.905,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000003,0.9,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000002,0.9,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000002,-0.905,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,0.9,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,0.9,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,1.0,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904998,-1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900002,-1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900001,-1.0,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904999,-1.0,1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904999,-0.905,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904999,0.9,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,0.9,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,-0.905,1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900002,-0.905,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900002,0.9,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000003,0.9,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000002,-0.905,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999998,0.9,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999998,-0.905,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999998,-0.905,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999998,0.9,2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999998,1.0,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999998,0.9,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,0.9,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,1.0,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000002,-1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000002,-0.905,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000001,-0.905,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000001,-1.0,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,0.9,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,-0.905,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,-0.905,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,0.9,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000002,-1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000002,-0.905,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000002,-0.905,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000002,-1.0,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900002,-1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900002,-0.905,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000002,-0.905,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000002,-1.0,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000001,-1.0,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000001,-0.905,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000001,-0.905,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000001,-1.0,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904999,-1.0,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904999,-0.905,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,-0.905,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,-1.0,1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900001,-1.0,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900001,-0.905,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904999,-0.905,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904999,-1.0,1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999998,0.9,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999998,-0.905,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,-0.905,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,0.9,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999998,-1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999998,-0.905,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904998,-0.905,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904998,-1.0,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-0.900002,-0.905,3.04);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-0.900002,0.9,3.039999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900002,0.9,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900002,-0.905,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000002,0.9,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000002,1.0,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000001,1.0,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000001,0.9,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999998,-0.905,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999998,-1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,-1.0,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,-0.905,1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900002,1.0,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900001,1.0,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000001,1.0,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000002,1.0,2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900002,-1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000002,-1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000001,-1.0,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900001,-1.0,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999998,-1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904998,-1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904999,-1.0,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,-1.0,1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900001,0.9,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900001,1.0,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904999,1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904999,0.9,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999998,-0.905,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999998,0.9,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904998,0.9,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904998,-0.905,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999998,1.0,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999998,1.0,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904998,1.0,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904998,1.0,3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904999,1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904999,1.0,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999998,1.0,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904999,1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904998,1.0,2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900001,-0.905,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900001,0.9,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904999,0.9,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904999,-0.905,1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999998,0.9,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999998,1.0,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904998,1.0,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904998,0.9,3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999998,-1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904998,-1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904998,-1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999998,-1.0,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,-1.0,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904999,-1.0,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904999,-1.0,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.999999,-1.0,1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904998,0.9,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900002,0.9,3.029999);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-0.900002,0.9,3.039999);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(0.904998,0.9,3.04);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(0.904998,0.9,3.04);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(0.904998,-0.905,3.04);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904998,-0.905,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904998,0.9,3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000001,-0.905,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000002,-0.905,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000002,0.9,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.000001,0.9,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(0.904998,-0.905,3.04);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-0.900002,-0.905,3.04);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900002,-0.905,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904998,-0.905,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904998,1.0,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.904999,1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900001,1.0,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.900002,1.0,2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Red.getR(),Red.getG(),Red.getB(),Red.getA());
	
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(0.904998,-0.905,3.04);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(0.904998,0.9,3.04);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(-0.900002,0.9,3.039999);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(-0.900002,-0.905,3.04);
	
	glEnd();
	
	};

void draw_Cube_018_Cube_025() {

	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.0,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.0,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,0.9,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,1.0,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,1.0,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,0.9,-3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,0.9,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,0.9,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,0.9,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,0.9,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-0.905,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-0.905,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.0,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.0,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,0.9,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,1.0,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,0.9,-3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,0.9,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,0.9,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,-0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,-1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,-1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,-0.905,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,-1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,-1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,-1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,-1.0,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,-1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,-1.0,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,1.0,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,1.0,-3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-0.905,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,0.9,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,0.9,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-0.905,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,-1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,-0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,-0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,-1.0,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,1.0,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,1.0,-3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,0.9,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,1.0,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,0.9,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,0.9,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,0.9,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,1.0,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-0.905,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-0.905,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.0,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-0.905,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,0.9,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,0.9,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-0.905,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,0.9,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,0.9,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-0.905,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,0.9,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,0.9,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.0,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,-1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,-1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.0,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-0.905,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,0.9,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,0.9,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-0.905,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,-0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,0.9,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,0.9,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-0.905,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,0.9,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,-0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,-0.905,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,0.9,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,1.0,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,0.9,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,0.9,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.0,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-0.905,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-0.905,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.0,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,0.9,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-0.905,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-0.905,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,0.9,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-0.905,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.0,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,-1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,-0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.0,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-0.905,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-0.905,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.0,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-0.905,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-0.905,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.0,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-0.905,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-0.905,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.0,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,0.9,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,-0.905,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-0.905,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,0.9,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,-1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,-0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,-0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,-1.0,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(0.900001,-0.905,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(0.900001,0.9,-3.039999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,0.9,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,-0.905,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,0.9,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,0.9,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,-0.905,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,-1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-0.905,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,1.0,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,-1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-1.0,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,-1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,-1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.0,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,0.9,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,0.9,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,-0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,0.9,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,0.9,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,-0.905,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,1.0,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,1.0,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,1.0,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.0,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,1.0,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,1.0,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,-0.905,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,0.9,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,0.9,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-0.905,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,0.9,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,0.9,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,-1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,-1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,-1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.999999,-1.0,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,-1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.0,-1.0,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,0.9,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,0.9,-3.029999);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(0.900001,0.9,-3.039999);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-0.904999,0.9,-3.04);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-0.904999,0.9,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-0.904999,-0.905,-3.04);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,-0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,0.9,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-0.905,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,-0.905,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.000001,0.9,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.0,0.9,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-0.904999,-0.905,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(0.900001,-0.905,-3.04);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,-0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,-0.905,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.904999,1.0,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-0.905,1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.9,1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(0.900001,1.0,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Orange.getR(),Orange.getG(),Orange.getB(),Orange.getA());
	
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-0.904999,-0.905,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(-0.904999,0.9,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(0.900001,0.9,-3.039999);
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(0.900001,-0.905,-3.04);
	
	glEnd();
	
	};

void draw_Cube_017_Cube_024() {

	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.03,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,3.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,3.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,3.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,3.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,2.93,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,3.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,2.93,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,2.93,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,2.93,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.125,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,3.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,3.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,2.93,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,3.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,3.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,2.93,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.125,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.03,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,3.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,3.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,3.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,3.03,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,2.93,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,2.93,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.125,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,3.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,3.03,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,3.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,3.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,2.93,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,3.03,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.125,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.03,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,2.93,-3.03);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-2.93,2.93,-3.040001);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-2.93,1.125,-3.04);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,2.93,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,2.93,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.125,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,2.93,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.125,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,3.03,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.125,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,2.93,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.125,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,-2.93);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-1.125,3.04,-2.93);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-1.125,3.04,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,2.93,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.03,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,2.93,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.03,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.03,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.125,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.03,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.125,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.125,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,2.93,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,1.125,-2.93);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.039999,2.93,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,2.93,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,3.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,2.93,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.125,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,3.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,3.03,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.03,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.03,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,2.93,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,3.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,2.93,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,3.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,3.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.125,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,2.93,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,2.93,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.125,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.03,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.03,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.125,-3.03);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-2.93,1.125,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-1.125,1.125,-3.04);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,-2.930001);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.039999,2.93,-2.930001);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.040001,2.93,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,2.93,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.125,-3.03);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-1.125,1.125,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-1.125,2.93,-3.04);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.040001,2.93,-1.125);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,1.125,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-1.125,2.93,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-2.93,2.93,-3.040001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,2.93,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,2.93,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,1.125,-1.125);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,1.125,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-1.125,3.04,-1.125);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-2.930001,3.04,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,3.03,-2.930001);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-2.93,3.04,-2.930001);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-1.125,3.04,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-2.930001,3.04,-1.125);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-2.93,3.04,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,3.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,3.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(White.getR(),White.getG(),White.getB(),White.getA());
	
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-2.930001,3.04,-1.125);
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(-1.125,3.04,-1.125);
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(-1.125,3.04,-2.93);
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(-2.93,3.04,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Orange.getR(),Orange.getG(),Orange.getB(),Orange.getA());
	
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-2.93,1.125,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(-2.93,2.93,-3.040001);
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(-1.125,2.93,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(-1.125,1.125,-3.04);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Green.getR(),Green.getG(),Green.getB(),Green.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-3.04,1.125,-1.125);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(-3.040001,2.93,-1.125);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(-3.039999,2.93,-2.930001);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(-3.04,1.125,-2.93);
	
	glEnd();
	
	};

void draw_Cube_016_Cube_023() {

	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.03,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,3.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,3.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,2.93,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,2.93,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,3.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,3.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,2.93,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.125,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.03,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,3.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,3.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,3.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,3.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,3.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,2.93,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.125,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.03,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.03,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,3.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,3.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,3.03,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,2.93,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.125,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,3.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,3.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,3.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,3.03,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,2.93,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,3.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,3.03,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.125,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.03,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.125,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.125,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,3.03,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.03,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.125,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,2.93,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.125,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,-0.9);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-1.125,3.04,-0.9);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-1.125,3.04,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,2.93,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,3.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.03,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,2.93,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.03,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.03,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.125,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.03,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.125,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.125,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.03,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,2.93,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,1.125,-0.9);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.039999,2.93,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,2.93,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.125,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,3.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,3.03,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.03,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.03,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,2.93,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,3.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,3.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,2.93,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,3.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,3.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,3.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,3.03,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,3.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,3.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,3.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,3.03,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.125,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,2.93,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,2.93,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.125,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,3.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,3.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.03,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.03,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,-0.9);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.039999,2.93,-0.9);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,2.93,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,2.93,0.905);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,1.125,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,2.93,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,2.93,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,1.125,0.905);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,1.125,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-1.125,3.04,0.905);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-2.93,3.04,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,3.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,3.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,3.03,-0.9);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-2.93,3.04,-0.9);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-1.125,3.04,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-2.93,3.04,0.905);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-2.93,3.04,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,3.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,3.03,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(White.getR(),White.getG(),White.getB(),White.getA());
	
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-2.93,3.04,0.905);
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(-1.125,3.04,0.905);
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(-1.125,3.04,-0.9);
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(-2.93,3.04,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Green.getR(),Green.getG(),Green.getB(),Green.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-3.04,1.125,0.905);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(-3.04,2.93,0.905);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(-3.039999,2.93,-0.9);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(-3.04,1.125,-0.9);
	
	glEnd();
	
	};

void draw_Cube_015_Cube_022() {

	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.0,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.9,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.0,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.9,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,0.9,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.9,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.9,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.9,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-0.905,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-0.905,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.0,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.0,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.9,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.0,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.0,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.9,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.9,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.9,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.905,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-0.905,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.0,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.0,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.0,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.0,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.0,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.0,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-0.905,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.9,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.9,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-0.905,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.0,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.905,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.905,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.0,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.0,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.0,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.0,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.0,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.9,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,0.9,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.9,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,0.9,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.0,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-0.905,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-0.905,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.0,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-0.905,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,0.9,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.9,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-0.905,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.905,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.9,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,0.9,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-0.905,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,0.9,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.9,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-0.905,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.9,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.9,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-0.905,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.905,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.9,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.9,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.905,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.9,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.905,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-0.905,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,0.9,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,0.9,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,0.9,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-0.905,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-0.905,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,0.9,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-0.905,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-0.905,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.9,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.905,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-0.905,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.0,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.905,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.905,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.0,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-0.905,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-0.905,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.0,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.0,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-0.905,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-0.905,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.0,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.0,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-0.905,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-0.905,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.0,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,0.9,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-0.905,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-0.905,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,0.9,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.905,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.905,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.0,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,-0.905,-0.9);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.039999,0.9,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.9,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.905,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,0.9,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,0.9,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-0.905,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-0.905,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.0,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.0,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.9,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.9,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.905,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.9,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.9,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.905,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.0,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.0,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.0,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-0.905,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.9,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.9,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-0.905,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.9,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.0,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.9,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.0,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.0,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.0,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.9,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.9,-0.9);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.039999,0.9,-0.9);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,0.9,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,0.9,0.905);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,-0.905,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.905,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.9,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-0.905,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-0.905,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,0.9,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,0.9,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,-0.905,0.905);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,-0.905,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.905,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.905,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.0,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.0,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Green.getR(),Green.getG(),Green.getB(),Green.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-3.04,-0.905,0.905);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(-3.04,0.9,0.905);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(-3.039999,0.9,-0.9);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(-3.04,-0.905,-0.9);
	
	glEnd();
	
	};

void draw_Cube_014_Cube_021() {

	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-0.9,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-0.9,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-0.9,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-0.9,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.900001,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.900001,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.0,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.0,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.905,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,0.905,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-0.9,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-0.9,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.905,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-0.9,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-0.9,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,0.905,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.900001,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.900001,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.0,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-0.9,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-0.9,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.0,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.905,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.9,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-0.9,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,0.905,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.9,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-0.9,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.900001,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-0.9,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-1.0,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.0,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-0.9,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-0.9,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.905,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.905,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.9,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.9,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-0.9,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.900001,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,1.0,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-0.9,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-0.9,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.0,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.0,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,0.905,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-0.9,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-0.9,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,0.905,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.905,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.905,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.9,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.900001,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.0,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-0.9,-3.03);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-1.125,-0.9,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-1.125,0.905,-3.04);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,1.0,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.9,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.9,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.0,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.0,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.905,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.905,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-0.9,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-0.9,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.905,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.905,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.905,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.905,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,-0.9,-1.125);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.039999,-0.900001,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.900001,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.9,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-0.9,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-0.9,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-0.9,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-0.9,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,0.905,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,0.905,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-0.9,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-0.9,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.905,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,0.905,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.905,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,0.905,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,0.905,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,0.905,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-0.9,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-0.9,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.905,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.905,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,0.905,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.905,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,0.905,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.0,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,0.905,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.905,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,0.905,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.900001,-2.93);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.039999,-0.900001,-2.93);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.040001,0.905,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.040001,0.905,-2.93);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,0.905,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.905,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,0.905,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,0.905,-1.125);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,-0.9,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.9,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.905,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-1.125,0.905,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-2.930001,0.905,-3.04);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,0.905,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-0.9,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-0.9,-3.03);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-2.93,-0.9,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-1.125,-0.9,-3.04);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-2.930001,0.905,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-2.93,-0.9,-3.04);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-0.9,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,0.905,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Orange.getR(),Orange.getG(),Orange.getB(),Orange.getA());
	
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-2.930001,0.905,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(-1.125,0.905,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(-1.125,-0.9,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(-2.93,-0.9,-3.04);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Green.getR(),Green.getG(),Green.getB(),Green.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-3.04,0.905,-1.125);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(-3.040001,0.905,-2.93);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(-3.039999,-0.900001,-2.93);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(-3.04,-0.9,-1.125);
	
	glEnd();
	
	};

void draw_Cube_013_Cube_020() {

	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,0.9,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.9,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,0.899999,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,0.899999,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,0.999999,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,0.999999,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,0.900001,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,0.900001,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,1.000001,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,1.000001,2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,0.999999,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,0.999999,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,0.999999,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,0.999999,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-0.905,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-0.905,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.0,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.0,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-0.905,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,0.9,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.9,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-0.905,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-0.905,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-0.905,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,0.899999,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,0.899999,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.904999,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.904999,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,0.900001,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,0.900001,2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,0.999999,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,0.999999,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,0.899999,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,0.899999,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.0,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.0,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-1.0,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-1.0,1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.905,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.9,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,0.9,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-0.905,1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.9,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.0,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.0,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,0.9,1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,0.900001,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,0.900001,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,1.000001,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,1.000001,3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,0.999999,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,0.899999,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.9,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.905,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.905,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.9,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.9,1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.904999,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-0.905,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,0.900001,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,0.900001,3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,1.000001,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,1.000001,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,1.000001,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,1.000001,2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.999999,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.999999,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.9,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.9,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,0.999999,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,0.999999,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.0,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,1.000001,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,1.000001,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.0,1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.0,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-0.905,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,0.9,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,0.9,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-0.905,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-0.905,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-0.905,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.0,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.9,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,0.900001,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,1.000001,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.0,1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-0.905,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,0.899999,3.03);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-1.124999,0.899999,3.04);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-1.124999,-0.905,3.04);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.999999,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.0,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-1.0,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-1.0,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.0,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.0,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.0,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.0,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.0,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.0,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.0,1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.9,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.9,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.0,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.0,1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,1.0,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-0.905,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-0.905,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.0,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.9,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.9,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-0.905,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-0.905,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-1.0,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.0,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.0,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.905,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.905,1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,0.9,1.125001);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.039999,0.900001,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,0.900001,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.9,1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,1.000001,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,1.000001,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,0.999999,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,0.999999,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-1.0,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-1.0,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,0.900001,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,0.899999,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,0.999999,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,1.000001,3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,0.9,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.0,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,0.9,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-1.0,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-0.905,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-0.905,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,0.899999,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,0.899999,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-0.905,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-0.905,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.0,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.999999,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.904999,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.905,1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.999999,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-0.905,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.904999,3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-0.905,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-0.905,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.0,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-0.905,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-0.905,3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,0.9,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,0.899999,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-0.905,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-0.905,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.999999,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.999999,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.904999,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.904999,2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.0,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.905,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-0.905,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-1.0,1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-0.905,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-0.905,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.0,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.904999,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,0.900001,2.930001);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.039999,0.900001,2.930001);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,-0.904999,2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,-0.904999,2.930001);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.040001,-0.905,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.905,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.904999,2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,1.0,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,1.000001,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,0.999999,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.040001,-0.905,1.125001);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,0.9,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,0.9,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-0.905,1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-1.124999,-0.905,3.04);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-2.93,-0.905,3.040001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-0.905,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-0.905,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,0.899999,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,0.900001,3.030001);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-2.929999,0.900001,3.040001);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-1.124999,0.899999,3.04);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-2.93,-0.905,3.040001);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-2.929999,0.900001,3.040001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,0.900001,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-0.905,3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Green.getR(),Green.getG(),Green.getB(),Green.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-3.040001,-0.905,1.125001);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(-3.04,-0.904999,2.930001);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(-3.039999,0.900001,2.930001);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(-3.04,0.9,1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Red.getR(),Red.getG(),Red.getB(),Red.getA());
	
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-2.93,-0.905,3.040001);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(-1.124999,-0.905,3.04);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(-1.124999,0.899999,3.04);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(-2.929999,0.900001,3.040001);
	
	glEnd();
	
	};

void draw_Cube_012_Cube_019() {

	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124998,1.03,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124998,1.03,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029998,1.03,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029998,1.03,2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124998,3.03,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029998,3.03,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029998,3.03,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124998,3.03,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029998,2.930001,2.930002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029998,3.03,2.930002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029998,3.03,3.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029998,2.930001,3.030002);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124998,2.930001,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124998,3.03,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029998,3.03,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029998,2.930001,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,2.93,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,3.03,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,3.03,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,2.93,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,1.125,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,1.03,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,1.03,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,1.125,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,1.03,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124998,1.03,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029998,1.03,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,1.03,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,3.03,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,3.03,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029998,3.03,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124998,3.03,2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,2.93,1.125002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,3.03,1.125002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029998,3.03,2.930002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029998,2.930001,2.930002);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029998,2.930001,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029998,3.03,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029998,3.03,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029998,2.930001,2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,1.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,1.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,1.03,1.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,1.125,1.030002);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,1.125002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029998,1.03,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,1.03,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,1.03,1.125002);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029998,1.03,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029998,1.03,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,1.03,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,1.03,2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029998,3.03,2.930002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929998,3.03,2.930002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929998,3.03,3.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029998,3.03,3.030002);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029998,1.125,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029998,2.930001,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029998,2.930001,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029998,1.125,2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,1.125002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,1.125002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029998,1.125,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029998,1.03,2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,3.03,1.125002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,3.03,1.125002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929998,3.03,2.930002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029998,3.03,2.930002);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029998,2.930001,3.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029998,3.03,3.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929998,3.03,3.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929998,2.930001,3.030002);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,3.03,1.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,2.93,1.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,2.93,1.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,3.03,1.030002);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029998,1.03,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029998,1.125,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029998,1.125,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029998,1.03,2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929998,1.125,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929998,2.930001,3.030002);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-2.929998,2.930001,3.040002);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-2.929998,1.125,3.040001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124998,1.125,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124998,2.930001,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029998,2.930001,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029998,1.125,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029998,1.125,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029998,2.930001,3.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929998,2.930001,3.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929998,1.125,3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,3.03,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,2.93,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,2.93,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,3.03,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,1.03,1.125002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,1.03,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124998,1.03,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,1.03,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,1.125,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,2.93,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,2.93,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,1.125,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029998,1.125,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029998,2.930001,2.930002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029998,2.930001,3.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029998,1.125,3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,3.03,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124998,3.03,2.929999);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-1.124998,3.04,2.929999);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-1.125001,3.04,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,2.93,1.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,1.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,1.125,1.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,2.93,1.030002);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,3.03,1.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,2.93,1.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,2.93,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,3.03,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,1.03,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929998,1.125,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124998,1.125,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124998,1.03,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,2.93,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,1.125,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,1.125,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,2.93,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029998,1.03,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029998,1.125,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929998,1.125,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,1.03,3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029998,1.03,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029998,1.125,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029998,1.125,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029998,1.03,3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124998,1.03,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124998,1.125,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029998,1.125,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029998,1.03,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,1.03,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,1.125,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,1.125,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,1.03,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029998,1.03,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029998,1.125,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,1.125,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,1.03,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,2.93,1.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,1.125,1.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,1.125,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,2.93,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,1.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,1.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,1.125002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,1.125002);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.039999,1.125,2.930001);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.039998,2.930001,2.930002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029998,2.930001,2.930002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029998,1.125,2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929998,2.930001,3.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929998,3.03,3.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124998,3.03,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124998,2.930001,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,1.125,1.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,1.03,1.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,1.03,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,1.125,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929998,3.03,2.930002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124998,3.03,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124998,3.03,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929998,3.03,3.030002);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,1.03,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,1.03,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124998,1.03,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124998,1.03,2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,1.03,1.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,1.03,1.125002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,1.03,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,1.03,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029998,2.930001,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029998,3.03,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,3.03,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,2.93,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,1.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,2.93,1.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,2.93,1.125002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,1.125002);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,3.03,1.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,3.03,1.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,3.03,1.125002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,3.03,1.125002);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,3.03,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,3.03,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,3.03,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,3.03,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,3.03,1.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,3.03,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,3.03,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,3.03,1.125002);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029998,1.125,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029998,2.930001,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,2.93,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,1.125,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,2.93,1.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,3.03,1.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,3.03,1.125002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,2.93,1.125002);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,1.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.03,1.125002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,1.03,1.125002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,1.03,1.030002);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,1.03,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,1.03,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,1.03,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,1.03,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124998,1.125,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929998,1.125,3.030001);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-2.929998,1.125,3.040001);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-1.124998,1.125,3.039999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,2.93,1.125002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029998,2.930001,2.930002);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.039998,2.930001,2.930002);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.040001,2.93,1.125002);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124998,2.930001,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124998,1.125,3.029999);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-1.124998,1.125,3.039999);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-1.124998,2.930001,3.039999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.040001,2.93,1.125002);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.040001,1.125,1.125002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,1.125002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,2.93,1.125002);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-1.124998,2.930001,3.039999);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-2.929998,2.930001,3.040002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929998,2.930001,3.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124998,2.930001,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.040001,1.125,1.125002);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.039999,1.125,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029998,1.125,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,1.125,1.125002);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-1.125001,3.04,1.124999);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-2.930001,3.04,1.125002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,3.03,1.125002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,3.03,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124998,3.03,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929998,3.03,2.930002);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-2.929998,3.04,2.930002);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-1.124998,3.04,2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-2.930001,3.04,1.125002);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(-2.929998,3.04,2.930002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929998,3.03,2.930002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,3.03,1.125002);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(White.getR(),White.getG(),White.getB(),White.getA());
	
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-2.930001,3.04,1.125002);
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(-1.125001,3.04,1.124999);
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(-1.124998,3.04,2.929999);
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(-2.929998,3.04,2.930002);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Green.getR(),Green.getG(),Green.getB(),Green.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-3.040001,1.125,1.125002);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(-3.040001,2.93,1.125002);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(-3.039998,2.930001,2.930002);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(-3.039999,1.125,2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Red.getR(),Red.getG(),Red.getB(),Red.getA());
	
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-2.929998,1.125,3.040001);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(-2.929998,2.930001,3.040002);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(-1.124998,2.930001,3.039999);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(-1.124998,1.125,3.039999);
	
	glEnd();
	
	};

void draw_Cube_011_Cube_018() {

	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-1.03,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-1.03,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.03,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.03,-2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-3.03,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-3.03,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-3.03,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-3.03,-3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-2.93,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-3.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-3.03,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-2.93,-3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-2.93,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-3.03,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-3.03,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-2.93,-3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-2.93,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-3.029999,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-3.029999,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-2.93,-1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,-1.125,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,-1.029999,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.029999,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.125,-1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,-1.029999,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-1.03,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.03,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.029999,-1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,-3.029999,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-3.029999,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-3.03,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-3.03,-2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-2.93,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-3.029999,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-3.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-2.93,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-2.93,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-3.03,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-3.03,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-2.93,-2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-1.125,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-1.029999,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-1.029999,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-1.125,-1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-1.029999,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-1.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-1.029999,-1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.03,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-1.03,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-1.03,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-3.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-3.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-3.03,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-3.03,-3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.125,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-2.93,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-2.93,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.125,-2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-1.029999,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-1.125,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.03,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-3.029999,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-3.029999,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-3.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-3.03,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-2.93,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-3.03,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-3.03,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-2.93,-3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-3.029999,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-2.93,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-2.93,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-3.029999,-1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.03,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.125,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.125,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.03,-2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-1.125,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-2.93,-3.030001);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-2.929999,-2.93,-3.040001);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-2.929999,-1.125,-3.040001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-1.125,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-2.93,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-2.93,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.125,-3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-2.93,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-2.93,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-1.125,-3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,-3.029999,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,-2.93,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-2.93,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-3.029999,-1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-1.029999,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-1.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-1.03,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,-1.029999,-1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.125,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-2.93,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-2.93,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.125,-1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-2.93,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-2.93,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,-3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,-3.029999,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-3.03,-2.929999);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-1.124999,-3.04,-2.929999);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-1.125001,-3.039999,-1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-2.93,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-1.125,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-1.125,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-2.93,-1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-3.029999,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-2.93,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,-2.93,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,-3.029999,-1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-1.03,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-1.125,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-1.125,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-1.03,-3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,-2.93,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,-1.125,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.125,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-2.93,-1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.03,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-1.125,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-1.03,-3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.03,-3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-1.03,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-1.125,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.125,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.03,-3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.029999,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.125,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.125,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.029999,-1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.03,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.125,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.125,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.029999,-1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-2.93,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-1.125,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,-1.125,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,-2.93,-1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-1.029999,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-1.125,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-1.125,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-1.029999,-1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.039999,-1.125,-2.930001);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.039999,-2.93,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-2.93,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-2.93,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-3.03,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-3.03,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-2.93,-3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-1.125,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-1.029999,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,-1.029999,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,-1.125,-1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-3.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-3.03,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-3.03,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-3.03,-3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-1.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-1.03,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-1.03,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-1.03,-2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-1.029999,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-1.029999,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,-1.029999,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,-1.029999,-1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-2.93,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-3.03,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-3.029999,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-2.93,-1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-1.125,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-2.93,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-2.93,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-1.125,-1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-3.029999,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-3.029999,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-3.029999,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-3.029999,-1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,-3.029999,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-3.029999,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-3.029999,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,-3.029999,-1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-3.029999,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,-3.029999,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,-3.029999,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-3.029999,-1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.125,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-2.93,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-2.93,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.125,-1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-2.93,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-3.029999,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-3.029999,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-2.93,-1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-1.029999,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-1.029999,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-1.029999,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-1.029999,-1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,-1.029999,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,-1.029999,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.029999,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.029999,-1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-1.125,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-1.125,-3.030001);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-2.929999,-1.125,-3.040001);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-1.124999,-1.125,-3.039999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-2.93,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-2.93,-2.930001);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.039999,-2.93,-2.930001);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.040001,-2.93,-1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-2.93,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-1.125,-3.029999);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-1.124999,-1.125,-3.039999);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-1.124999,-2.93,-3.039999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.040001,-2.93,-1.125001);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.040001,-1.125,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-1.125,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-2.93,-1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-1.124999,-2.93,-3.039999);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(-2.929999,-2.93,-3.040001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-2.93,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-2.93,-3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.040001,-1.125,-1.125001);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.039999,-1.125,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-1.125,-1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-1.125001,-3.039999,-1.124999);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-2.930001,-3.039999,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-3.029999,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125001,-3.029999,-1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-3.03,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-3.03,-2.930001);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-2.929999,-3.04,-2.930001);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-1.124999,-3.04,-2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-2.930001,-3.039999,-1.125001);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-2.929999,-3.04,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-3.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-3.029999,-1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Green.getR(),Green.getG(),Green.getB(),Green.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-3.040001,-1.125,-1.125001);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(-3.040001,-2.93,-1.125001);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(-3.039999,-2.93,-2.930001);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(-3.039999,-1.125,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Orange.getR(),Orange.getG(),Orange.getB(),Orange.getA());
	
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-2.929999,-1.125,-3.040001);
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(-2.929999,-2.93,-3.040001);
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(-1.124999,-2.93,-3.039999);
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(-1.124999,-1.125,-3.039999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Yellow.getR(),Yellow.getG(),Yellow.getB(),Yellow.getA());
	
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-2.930001,-3.039999,-1.125001);
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(-1.125001,-3.039999,-1.124999);
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(-1.124999,-3.04,-2.929999);
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(-2.929999,-3.04,-2.930001);
	
	glEnd();
	
	};

void draw_Cube_010_Cube_017() {

	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.03,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-3.03,0.899999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-3.03,0.899999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-3.03,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-3.03,0.999999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-2.93,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-3.03,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-3.03,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-2.93,1.000001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-2.93,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-3.03,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-3.03,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-2.93,0.999999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-2.93,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-3.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-2.93,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.125,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.03,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-3.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-3.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-3.03,0.899999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-3.03,0.899999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-2.93,-0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-3.03,-0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-3.03,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-2.93,0.900001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-2.93,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-3.03,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-3.03,0.899999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-2.93,0.899999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.125,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.03,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.03,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-3.03,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-3.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-3.03,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-3.03,1.000001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-2.93,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-2.93,0.899999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.125,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.03,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-3.03,-0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-3.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-3.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-3.03,0.900001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-2.93,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-3.03,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-3.03,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-2.93,1.000001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-3.03,-0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-2.93,-0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-3.03,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.125,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.03,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-2.93,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-2.93,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.125,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-2.93,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-2.93,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.125,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-3.03,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.03,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.125,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-2.93,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.125,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-2.93,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-2.93,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-3.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-3.03,0.899999);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-1.124999,-3.04,0.899999);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-1.125,-3.04,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-2.93,-0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-2.93,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-3.03,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.03,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-2.93,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.03,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.03,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.03,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.125,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.03,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.125,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.125,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.03,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-2.93,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.03,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,-1.125,0.9);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.039999,-2.93,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-2.93,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-2.93,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-3.03,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-3.03,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-2.93,0.999999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.125,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-3.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-3.03,0.899999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-3.03,0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-3.03,1.000001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.03,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.03,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-2.93,0.899999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-3.03,0.899999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-3.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-2.93,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-2.93,-0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-2.93,-0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-3.03,-0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-3.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-3.03,-0.904999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-3.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-3.03,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-3.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-3.03,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.125,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-2.93,0.899999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-2.93,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.125,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-2.93,-0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-3.03,-0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-3.03,-0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-2.93,-0.904999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.03,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.030001,-1.03,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-2.93,-0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-2.93,0.900001);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.039999,-2.93,0.900001);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,-2.93,-0.904999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,-2.93,-0.904999);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,-1.125,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-2.93,-0.904999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-2.93,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-2.93,0.999999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,-1.125,-0.905);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,-1.125,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-1.125,-3.04,-0.905);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-2.930001,-3.04,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-3.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-3.03,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-3.03,0.899999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-3.03,0.9);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-2.929999,-3.04,0.9);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-1.124999,-3.04,0.899999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-2.930001,-3.04,-0.905);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-2.929999,-3.04,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-3.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-3.03,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Yellow.getR(),Yellow.getG(),Yellow.getB(),Yellow.getA());
	
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-2.930001,-3.04,-0.905);
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(-1.125,-3.04,-0.905);
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(-1.124999,-3.04,0.899999);
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(-2.929999,-3.04,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Green.getR(),Green.getG(),Green.getB(),Green.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-3.04,-1.125,-0.905);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(-3.04,-2.93,-0.904999);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(-3.039999,-2.93,0.900001);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(-3.04,-1.125,0.9);
	
	glEnd();
	
	};

void draw_Cube_009_Cube_016() {

	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-1.030001,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-1.030001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.030001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.030001,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-3.030001,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-3.030001,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-3.030001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-3.030001,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-2.930001,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-3.030001,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-3.030001,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-2.930001,3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-2.930001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-3.030001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-3.030001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-2.930001,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-2.930001,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-3.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-3.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-2.930001,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.125,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.125,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-1.030001,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.030001,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.03,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-3.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-3.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-3.030001,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-3.030001,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-2.930001,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-3.03,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-3.030001,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-2.930001,2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-2.930001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-3.030001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-3.030001,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-2.930001,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.03,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.03,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.125,1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.03,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-1.030001,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.030001,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.03,1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-1.030001,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-1.030001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.030001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.030001,2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-3.030001,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-3.030001,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-3.030001,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-3.030001,3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.125001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-2.930001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-2.930001,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.125001,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.03,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-1.125001,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-1.030001,2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-3.03,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-3.03,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-3.030001,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-3.030001,2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-2.930001,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-3.030001,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-3.030001,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-2.930001,3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-3.03,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-2.930001,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-2.930001,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-3.03,1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.030001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.125001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.125001,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.030001,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.125001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-2.930001,3.030001);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-2.929999,-2.930001,3.040001);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-2.93,-1.125001,3.04);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-1.125001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-2.930001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-2.930001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.125001,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-1.125001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-2.930001,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-2.930001,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.125001,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-3.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-2.930001,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-2.930001,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-3.03,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.03,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.030001,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-1.030001,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.03,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.125,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-2.930001,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-2.930001,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.125,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-1.125001,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-2.930001,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-2.930001,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-1.125001,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-3.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-3.030001,2.93);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-1.124999,-3.040001,2.93);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-1.125,-3.040001,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-2.930001,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.125,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-2.930001,1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-3.03,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-2.930001,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-2.930001,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-3.03,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.030001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.125001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-1.125001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-1.030001,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-2.930001,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.125,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.125,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-2.930001,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-1.030001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-1.125001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.125001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.030001,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-1.030001,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-1.125001,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-1.125001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-1.030001,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-1.030001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-1.125001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.125001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.030001,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.125,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.125,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.03,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.030001,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.125001,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.125,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.03,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-2.930001,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.125,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.125,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-2.930001,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.03,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.03,1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,-1.125001,2.930001);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.039999,-2.930001,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-2.930001,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-1.125001,2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-2.930001,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-3.030001,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-3.030001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-2.930001,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.125,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.03,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.125,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-3.030001,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-3.030001,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-3.030001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-3.030001,3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.030001,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.030001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-1.030001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-1.030001,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.03,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.03,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.03,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-2.930001,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-3.030001,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-3.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-2.930001,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-2.930001,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-2.930001,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-3.03,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-3.03,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-3.03,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-3.03,1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-3.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-3.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-3.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-3.03,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.930001,-3.03,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-3.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-3.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-3.03,1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-1.125001,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.029999,-2.930001,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-2.930001,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.125,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-2.930001,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-3.03,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-3.03,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-2.930001,1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.03,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.03,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.03,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.03,1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-1.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.03,-1.03,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-1.125001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-1.125001,3.03);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-2.93,-1.125001,3.04);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-1.124999,-1.125001,3.04);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-2.930001,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-2.930001,2.930001);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.039999,-2.930001,2.930001);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,-2.930001,1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-2.930001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-1.125001,3.03);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-1.124999,-1.125001,3.04);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-1.124999,-2.930001,3.04);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,-2.930001,1.125001);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,-1.125,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.030001,-2.930001,1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-1.124999,-2.930001,3.04);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(-2.929999,-2.930001,3.040001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-2.930001,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-2.930001,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,-1.125,1.125001);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glVertex3f(-3.04,-1.125001,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.029999,-1.125001,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-3.03,-1.125,1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-1.125,-3.040001,1.125);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-2.93,-3.040001,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-3.03,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.125,-3.03,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-1.124999,-3.030001,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-3.030001,2.930001);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-2.929999,-3.040001,2.930001);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-1.124999,-3.040001,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-2.93,-3.040001,1.125001);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(-2.929999,-3.040001,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.929999,-3.030001,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(-2.93,-3.03,1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Yellow.getR(),Yellow.getG(),Yellow.getB(),Yellow.getA());
	
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-2.93,-3.040001,1.125001);
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(-1.125,-3.040001,1.125);
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(-1.124999,-3.040001,2.93);
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(-2.929999,-3.040001,2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Red.getR(),Red.getG(),Red.getB(),Red.getA());
	
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-2.93,-1.125001,3.04);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(-2.929999,-2.930001,3.040001);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(-1.124999,-2.930001,3.04);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(-1.124999,-1.125001,3.04);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Green.getR(),Green.getG(),Green.getB(),Green.getA());
	
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-3.04,-1.125,1.125001);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(-3.04,-2.930001,1.125001);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(-3.039999,-2.930001,2.930001);
	glNormal3f(-1.0000,-0.0000,-0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(-3.04,-1.125001,2.930001);
	
	glEnd();
	
	};

void draw_Cube_008_Cube_009() {

	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.03,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-3.03,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-3.03,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,-3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-2.930001,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-3.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-3.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-2.930001,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-2.930001,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-3.03,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-2.930001,-3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-2.93,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-2.93,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.125,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-3.03,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-2.93,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-3.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-2.930001,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-2.930001,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-3.03,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-3.03,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-2.930001,-2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.125,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.03,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-3.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-3.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-3.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-3.03,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-2.930001,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-2.930001,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.125,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.03,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-3.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-3.03,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-2.930001,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-3.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-3.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-2.930001,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-3.03,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.125,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.03,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-2.930001,-3.03);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(2.93,-2.930001,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(2.93,-1.125,-3.04);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-2.930001,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-2.930001,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.125,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-2.930001,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-2.930001,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.125,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-3.03,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.125,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-2.93,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.125,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-2.930001,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-2.930001,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,-2.93);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(1.125,-3.04,-2.93);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(1.125,-3.04,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-2.93,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.03,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-2.93,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.03,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.03,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.03,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.125,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.03,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.125,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.125,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-2.93,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,-1.125,-2.93);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.039999,-2.930001,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-2.930001,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-2.930001,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-3.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-2.930001,-3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.125,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-3.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-3.03,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.03,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.03,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.03,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-2.930001,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-3.03,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-2.93,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-2.93,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-3.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-3.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.125,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-2.930001,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-2.93,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.125,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-2.93,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-3.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-2.93,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.03,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.03,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.03,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.125,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.125,-3.03);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(2.93,-1.125,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(1.125,-1.125,-3.04);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-2.93,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-2.930001,-2.93);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.039999,-2.930001,-2.93);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,-2.93,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-2.930001,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.125,-3.03);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(1.125,-1.125,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(1.125,-2.930001,-3.04);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,-2.93,-1.125);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,-1.125,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-2.93,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(1.125,-2.930001,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(2.93,-2.930001,-3.04);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-2.930001,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-2.930001,-3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,-1.125,-1.125);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,-1.125,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(1.125,-3.04,-1.125);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(2.930001,-3.04,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-3.03,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-3.03,-2.93);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(2.93,-3.04,-2.93);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(1.125,-3.04,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(2.930001,-3.04,-1.125);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(2.93,-3.04,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-3.03,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-3.03,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Yellow.getR(),Yellow.getG(),Yellow.getB(),Yellow.getA());
	
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(2.930001,-3.04,-1.125);
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(1.125,-3.04,-1.125);
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(1.125,-3.04,-2.93);
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(2.93,-3.04,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Orange.getR(),Orange.getG(),Orange.getB(),Orange.getA());
	
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(2.93,-1.125,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(2.93,-2.930001,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(1.125,-2.930001,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(1.125,-1.125,-3.04);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Blue.getR(),Blue.getG(),Blue.getB(),Blue.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(3.04,-1.125,-1.125);
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(3.04,-2.93,-1.125);
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(3.039999,-2.930001,-2.93);
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(3.04,-1.125,-2.93);
	
	glEnd();
	
	};

void draw_Cube_007_Cube_008() {

	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.03,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-3.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-2.93,-0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-3.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-2.93,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-2.93,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-2.93,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-3.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-3.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-2.93,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.125,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.03,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-3.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-3.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-2.93,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-3.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-3.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-2.93,-0.900001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-3.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-2.93,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.125,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.03,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.03,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-3.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-3.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-3.03,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-2.93,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.125,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.03,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-3.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-3.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-3.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-3.03,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-2.93,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-3.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-3.03,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.125,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.03,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.125,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.125,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-3.03,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.03,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.125,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-2.93,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.125,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-2.93,-0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,-0.9);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(1.125,-3.04,-0.9);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(1.125,-3.04,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-2.93,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-3.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.03,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-2.93,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.03,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.03,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.03,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.125,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.03,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.125,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.125,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.03,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-2.93,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.03,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,-1.125,-0.9);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.039999,-2.93,-0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-2.93,-0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-2.93,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.125,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-3.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-3.03,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.03,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.03,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-2.93,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-3.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-3.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-2.93,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-2.93,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-3.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-3.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-3.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-3.03,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-3.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-3.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-3.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-3.03,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.125,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-2.93,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-2.93,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.125,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-3.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-3.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-2.93,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.03,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.03,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-2.93,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-2.93,-0.900001);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.039999,-2.93,-0.900001);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,-2.93,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,-2.93,0.905);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,-1.125,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-2.93,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-2.93,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,-1.125,0.905);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,-1.125,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.125,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(1.125,-3.04,0.905);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(2.930001,-3.04,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-3.03,0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-3.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-3.03,-0.9);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(2.93,-3.04,-0.9);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(1.125,-3.04,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(2.930001,-3.04,0.905);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(2.93,-3.04,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-3.03,-0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-3.03,0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Yellow.getR(),Yellow.getG(),Yellow.getB(),Yellow.getA());
	
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(2.930001,-3.04,0.905);
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(1.125,-3.04,0.905);
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(1.125,-3.04,-0.9);
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(2.93,-3.04,-0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Blue.getR(),Blue.getG(),Blue.getB(),Blue.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(3.04,-1.125,0.905);
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(3.04,-2.93,0.905);
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(3.039999,-2.93,-0.900001);
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(3.04,-1.125,-0.9);
	
	glEnd();
	
	};

void draw_Cube_006_Cube_007() {

	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,-1.029999,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,-1.029999,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,-1.029999,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,-1.029999,2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,-3.029999,2.929998);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,-3.029999,2.929998);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,-3.029999,3.029998);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124998,-3.029999,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029998,-2.93,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029998,-3.029999,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029998,-3.029999,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029998,-2.93,3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124998,-2.93,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124998,-3.029999,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,-3.029999,3.029998);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,-2.93,3.029998);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-2.929999,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-3.029999,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-3.029999,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-2.929999,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-1.124999,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-1.029999,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-1.029999,1.029998);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-1.124999,1.029998);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-1.029999,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,-1.029999,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,-1.029999,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-1.029999,1.124998);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-3.029999,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-3.029999,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,-3.029999,2.929998);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,-3.029999,2.929998);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-2.929999,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-3.029999,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029998,-3.029999,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029998,-2.93,2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,-2.93,3.029998);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,-3.029999,3.029998);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,-3.029999,2.929998);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,-2.93,2.929998);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-1.124999,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-1.029999,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-1.029999,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-1.124999,1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-1.029999,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-1.029999,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,-1.029999,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-1.029999,1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-1.029999,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-1.029999,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,-1.029999,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,-1.029999,2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029998,-3.029999,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929998,-3.029999,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929998,-3.029999,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029998,-3.029999,3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,-1.124999,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,-2.93,3.029998);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,-2.93,2.929998);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,-1.124999,2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-1.029999,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-1.124999,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-1.124999,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-1.029999,2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-3.029999,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-3.029999,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929998,-3.029999,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029998,-3.029999,2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029998,-2.93,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029998,-3.029999,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929998,-3.029999,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929998,-2.93,3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-3.029999,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-2.929999,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-2.929999,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-3.029999,1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,-1.029999,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,-1.124999,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,-1.124999,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,-1.029999,2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,-1.124999,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929998,-2.93,3.030001);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(2.929998,-2.93,3.040001);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(2.929999,-1.124999,3.040001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,-1.124999,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124998,-2.93,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,-2.93,3.029998);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,-1.124999,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-1.124999,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029998,-2.93,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929998,-2.93,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,-1.124999,3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-3.029999,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-2.929999,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-2.929999,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-3.029999,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-1.029999,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,-1.029999,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,-1.029999,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-1.029999,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-1.124999,1.124998);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-2.929999,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-2.929999,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-1.124999,1.029998);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-1.124999,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029998,-2.93,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029998,-2.93,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-1.124999,3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-3.029999,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,-3.029999,2.929998);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(1.124999,-3.04,2.929998);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(1.125001,-3.039999,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-2.929999,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-1.124999,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-1.124999,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-2.929999,1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-3.029999,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-2.929999,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-2.929999,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-3.029999,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,-1.029999,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,-1.124999,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,-1.124999,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,-1.029999,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-2.929999,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-1.124999,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-1.124999,1.029998);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-2.929999,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-1.029999,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-1.124999,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,-1.124999,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,-1.029999,3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-1.029999,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-1.124999,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-1.124999,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-1.029999,3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,-1.029999,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,-1.124999,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,-1.124999,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,-1.029999,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-1.029999,1.124998);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-1.124999,1.124998);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-1.124999,1.029998);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-1.029999,1.029998);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,-1.029999,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,-1.124999,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-1.124999,1.124998);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-1.029999,1.124998);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-2.929999,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-1.124999,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-1.124999,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-2.929999,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-1.029999,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-1.124999,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-1.124999,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-1.029999,1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.039999,-1.124999,2.930001);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.039999,-2.93,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029998,-2.93,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-1.124999,2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929998,-2.93,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929998,-3.029999,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124998,-3.029999,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124998,-2.93,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-1.124999,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-1.029999,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-1.029999,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-1.124999,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929998,-3.029999,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,-3.029999,2.929998);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124998,-3.029999,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929998,-3.029999,3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,-1.029999,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,-1.029999,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,-1.029999,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,-1.029999,2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-1.029999,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-1.029999,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-1.029999,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-1.029999,1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,-2.93,2.929998);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,-3.029999,2.929998);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-3.029999,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-2.929999,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-1.124999,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-2.929999,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-2.929999,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-1.124999,1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-3.029999,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-3.029999,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-3.029999,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-3.029999,1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-3.029999,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-3.029999,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-3.029999,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-3.029999,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-3.029999,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-3.029999,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-3.029999,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-3.029999,1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,-1.124999,2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,-2.93,2.929998);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-2.929999,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-1.124999,1.124998);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-2.929999,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-3.029999,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-3.029999,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-2.929999,1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-1.029999,1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-1.029999,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-1.029999,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-1.029999,1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-1.029999,1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-1.029999,1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-1.029999,1.124998);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-1.029999,1.029998);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,-1.124999,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,-1.124999,3.030001);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(2.929999,-1.124999,3.040001);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(1.124999,-1.124999,3.039999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-2.929999,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029998,-2.93,2.930001);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.039999,-2.93,2.930001);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.040001,-2.929999,1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124998,-2.93,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,-1.124999,3.029999);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(1.124999,-1.124999,3.039999);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(1.124998,-2.93,3.039999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.040001,-2.929999,1.125001);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.040001,-1.124999,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-1.124999,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-2.929999,1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(1.124998,-2.93,3.039999);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(2.929998,-2.93,3.040001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929998,-2.93,3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124998,-2.93,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.040001,-1.124999,1.125001);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.039999,-1.124999,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-1.124999,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-1.124999,1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(1.125001,-3.039999,1.124999);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(2.930001,-3.039999,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-3.029999,1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-3.029999,1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,-3.029999,2.929998);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929998,-3.029999,2.930001);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(2.929998,-3.04,2.930001);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(1.124999,-3.04,2.929998);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(2.930001,-3.039999,1.125001);
	glNormal3f(0.0000,-1.0000,0.0000);
	glVertex3f(2.929998,-3.04,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929998,-3.029999,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-3.029999,1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Blue.getR(),Blue.getG(),Blue.getB(),Blue.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(3.040001,-1.124999,1.125001);
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(3.040001,-2.929999,1.125001);
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(3.039999,-2.93,2.930001);
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(3.039999,-1.124999,2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Red.getR(),Red.getG(),Red.getB(),Red.getA());
	
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(2.929999,-1.124999,3.040001);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(2.929998,-2.93,3.040001);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(1.124998,-2.93,3.039999);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(1.124999,-1.124999,3.039999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Yellow.getR(),Yellow.getG(),Yellow.getB(),Yellow.getA());
	
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(2.930001,-3.039999,1.125001);
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(1.125001,-3.039999,1.124999);
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(1.124999,-3.04,2.929998);
	glNormal3f(0.0000,-1.0000,0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(2.929998,-3.04,2.930001);
	
	glEnd();
	
	};

void draw_Cube_005_Cube_006() {

	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,1.03,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,1.03,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,1.03,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,1.03,-2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,3.03,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,3.03,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,3.03,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,3.03,-3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,2.93,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,3.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,3.03,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,2.93,-3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,2.93,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,3.03,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,3.03,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,2.93,-3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,2.93,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,3.03,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,3.03,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,2.93,-1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,1.125,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,1.03,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030002,1.03,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030002,1.125,-1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,1.03,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,1.03,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,1.03,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,1.03,-1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,3.03,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,3.03,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,3.03,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,3.03,-2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,2.93,-1.125002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,3.03,-1.125002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,3.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,2.93,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,2.93,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,3.03,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,3.03,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,2.93,-2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,1.125,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,1.03,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,1.03,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,1.125,-1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,1.03,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,1.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,1.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,1.03,-1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,1.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,1.03,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,1.03,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,1.03,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,3.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929998,3.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929998,3.03,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,3.03,-3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,1.125,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,2.93,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,2.93,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,1.125,-2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,1.03,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,1.125,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,1.125,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,1.03,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,3.03,-1.125002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,3.03,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929998,3.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,3.03,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,2.93,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,3.03,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929998,3.03,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929998,2.93,-3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,3.03,-1.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,2.93,-1.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,2.93,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,3.03,-1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,1.03,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,1.125,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,1.125,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,1.03,-2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,1.125,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929998,2.93,-3.030001);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(2.929998,2.93,-3.040002);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(2.929999,1.125,-3.040001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,1.125,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,2.93,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,2.93,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,1.125,-3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,1.125,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,2.93,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929998,2.93,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,1.125,-3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,3.03,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,2.93,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,2.93,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,3.03,-1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,1.03,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,1.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,1.03,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,1.03,-1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,1.125,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,2.93,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,2.93,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030002,1.125,-1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,1.125,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,2.93,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,2.93,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,1.125,-3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,3.03,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,3.03,-2.929999);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(1.124999,3.04,-2.929999);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(1.125001,3.04,-1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,2.93,-1.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,1.125,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,1.125,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,2.93,-1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,3.03,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,2.93,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,2.93,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,3.03,-1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,1.03,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,1.125,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,1.125,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,1.03,-3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,2.93,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,1.125,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030002,1.125,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,2.93,-1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,1.03,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,1.125,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,1.125,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,1.03,-3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,1.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,1.125,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,1.125,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,1.03,-3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,1.03,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,1.125,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,1.125,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,1.03,-3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,1.03,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,1.125,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030002,1.125,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030002,1.03,-1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,1.03,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,1.125,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,1.125,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,1.03,-1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,2.93,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,1.125,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,1.125,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,2.93,-1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,1.03,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,1.125,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,1.125,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,1.03,-1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.039999,1.125,-2.930001);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.039998,2.93,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,2.93,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,1.125,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929998,2.93,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929998,3.03,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,3.03,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,2.93,-3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,1.125,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,1.03,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,1.03,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,1.125,-1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929998,3.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,3.03,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,3.03,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929998,3.03,-3.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,1.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,1.03,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,1.03,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,1.03,-2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,1.03,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,1.03,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,1.03,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,1.03,-1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,2.93,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,3.03,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,3.03,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,2.93,-1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,1.125,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,2.93,-1.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,2.93,-1.125002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,1.125,-1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,3.03,-1.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,3.03,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,3.03,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,3.03,-1.125002);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,3.03,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,3.03,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,3.03,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,3.03,-1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,3.03,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,3.03,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,3.03,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,3.03,-1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,1.125,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,2.93,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,2.93,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,1.125,-1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,2.93,-1.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,3.03,-1.030002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,3.03,-1.125002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,2.93,-1.125002);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,1.03,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,1.03,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,1.03,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,1.03,-1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,1.03,-1.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,1.03,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,1.03,-1.124999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030002,1.03,-1.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,1.125,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,1.125,-3.030001);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(2.929999,1.125,-3.040001);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(1.124999,1.125,-3.039999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,2.93,-1.125002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,2.93,-2.930001);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.039998,2.93,-2.930001);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.040001,2.93,-1.125002);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,2.93,-3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,1.125,-3.029999);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(1.124999,1.125,-3.039999);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(1.124999,2.93,-3.039999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.040001,2.93,-1.125002);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.040001,1.125,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,1.125,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,2.93,-1.125002);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(1.124999,2.93,-3.039999);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(2.929998,2.93,-3.040002);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929998,2.93,-3.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,2.93,-3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.040001,1.125,-1.125001);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.039999,1.125,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,1.125,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,1.125,-1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(1.125001,3.04,-1.124999);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(2.930001,3.04,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,3.03,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,3.03,-1.124999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,3.03,-2.929999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929998,3.03,-2.930001);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(2.929998,3.04,-2.930001);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(1.124999,3.04,-2.929999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(2.930001,3.04,-1.125001);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(2.929998,3.04,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929998,3.03,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,3.03,-1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(White.getR(),White.getG(),White.getB(),White.getA());
	
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(2.930001,3.04,-1.125001);
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(1.125001,3.04,-1.124999);
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(1.124999,3.04,-2.929999);
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(2.929998,3.04,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Blue.getR(),Blue.getG(),Blue.getB(),Blue.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(3.040001,1.125,-1.125001);
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(3.040001,2.93,-1.125002);
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(3.039998,2.93,-2.930001);
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(3.039999,1.125,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Orange.getR(),Orange.getG(),Orange.getB(),Orange.getA());
	
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(2.929999,1.125,-3.040001);
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(2.929998,2.93,-3.040002);
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(1.124999,2.93,-3.039999);
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(1.124999,1.125,-3.039999);
	
	glEnd();
	
	};

void draw_Cube_004_Cube_005() {

	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,0.9,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.9,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,0.899999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,0.899999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,0.999999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,0.999999,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,0.900001,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,0.900001,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,1.000001,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,1.000001,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,0.999999,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,0.999999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,0.999999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,0.999999,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.905,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-1.0,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-0.905,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,0.9,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.9,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-0.905,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,0.899999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,0.899999,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.904999,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.904999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,0.900001,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,0.900001,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,0.999999,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,0.999999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,0.899999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,0.899999,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-1.0,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-0.905,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.9,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,0.9,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-0.905,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.9,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.0,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.0,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,0.9,-1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,0.900001,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,0.900001,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,1.000001,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,1.000001,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,0.999999,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,0.899999,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.9,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-0.905,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.905,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.9,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.9,-1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.904999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,0.900001,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,0.900001,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,1.000001,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,1.000001,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,1.000001,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,1.000001,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.999999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.999999,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-1.0,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-1.0,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.9,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.9,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,0.999999,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,0.999999,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.0,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,1.000001,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,1.000001,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.0,-1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-0.905,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,0.9,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,0.9,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-0.905,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-0.905,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.905,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-1.0,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.9,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,0.900001,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,1.000001,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.0,-1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,0.899999,-3.03);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(1.124999,0.899999,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(1.125,-0.905,-3.04);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.999999,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-1.0,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-1.0,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.0,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.0,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.0,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.0,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.0,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.0,-1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.9,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.9,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.0,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.0,-1.030001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-0.905,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-0.905,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-1.0,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.9,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.9,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-0.905,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-0.905,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-1.0,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.905,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-0.905,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,0.9,-1.125001);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.039999,0.900001,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,0.900001,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.9,-1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,1.000001,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,1.000001,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,0.999999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,0.999999,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-1.0,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,0.900001,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,0.899999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,0.999999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,1.000001,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,0.9,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.0,-1.030001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,0.9,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-0.905,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-0.905,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-1.0,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,0.899999,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,0.899999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.905,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.999999,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.904999,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.905,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.999999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.904999,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-0.905,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-0.905,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.9,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.029999,0.899999,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.905,-2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-0.905,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.999999,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.999999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.904999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.904999,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.030001,-0.905,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-0.905,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-1.0,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-1.0,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125001,-0.905,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-0.905,-1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.030001,-1.0,-1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.904999,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,0.900001,-2.930001);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.039999,0.900001,-2.930001);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,-0.904999,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,-0.904999,-2.930001);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.040001,-0.905,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.905,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.904999,-2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,-1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.0,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,1.000001,-2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,0.999999,-2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.040001,-0.905,-1.125);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,0.9,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.9,-1.125001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.905,-1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(1.125,-0.905,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(2.930001,-0.905,-3.040001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-0.905,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-0.905,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.124999,0.899999,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,0.900001,-3.03);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(2.929999,0.900001,-3.040001);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(1.124999,0.899999,-3.04);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(2.930001,-0.905,-3.040001);
	glNormal3f(0.0000,0.0000,-1.0000);
	glVertex3f(2.929999,0.900001,-3.040001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.929999,0.900001,-3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,-0.905,-3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Blue.getR(),Blue.getG(),Blue.getB(),Blue.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(3.040001,-0.905,-1.125);
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(3.04,-0.904999,-2.930001);
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(3.039999,0.900001,-2.930001);
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(3.04,0.9,-1.125001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Orange.getR(),Orange.getG(),Orange.getB(),Orange.getA());
	
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(2.930001,-0.905,-3.040001);
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(1.125,-0.905,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(1.124999,0.899999,-3.04);
	glNormal3f(0.0000,0.0000,-1.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(2.929999,0.900001,-3.040001);
	
	glEnd();
	
	};

void draw_Cube_003_Cube_004() {

	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-0.9,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.9,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-0.9,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.9,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-0.900001,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-0.900001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-1.0,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.905,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.905,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,0.905,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-0.9,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.9,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.905,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,0.905,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.905,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.9,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-0.9,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.905,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.905,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-0.900001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-0.900001,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.9,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.9,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.0,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.905,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.9,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-0.9,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,0.905,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.9,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-0.9,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-0.900001,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-0.9,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-1.0,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.9,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.9,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.905,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.905,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.9,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.9,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.905,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,0.905,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-0.9,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-0.900001,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.0,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,1.0,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.9,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.9,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.0,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,0.905,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-0.9,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-0.9,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,0.905,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.905,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.905,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.9,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-0.900001,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.0,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,0.905,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-0.9,3.03);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(1.125,-0.9,3.04);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(1.125,0.905,3.04);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,1.0,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.0,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.9,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.9,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.0,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.905,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.905,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.9,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.9,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.905,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.905,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.905,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.905,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,-0.9,1.125);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.039999,-0.900001,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-0.900001,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.9,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-0.9,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-0.9,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.0,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-0.9,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-0.9,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,0.905,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,0.905,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.9,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.9,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.905,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.905,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.905,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.905,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,0.905,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.905,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.905,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,0.905,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,0.905,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,0.905,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.9,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.9,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.905,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.905,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.0,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.905,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.905,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.905,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,0.905,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.0,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,0.905,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.905,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.905,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,-0.900001,2.93);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.039999,-0.900001,2.93);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,0.905,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,0.905,2.93);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,0.905,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.905,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.905,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.0,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.0,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,0.905,1.125);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,-0.9,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.9,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.905,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(1.125,0.905,3.04);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(2.930001,0.905,3.04);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,0.905,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,0.905,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-0.9,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-0.9,3.03);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(2.93,-0.9,3.04);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(1.125,-0.9,3.04);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(2.930001,0.905,3.04);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(2.93,-0.9,3.04);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-0.9,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,0.905,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Red.getR(),Red.getG(),Red.getB(),Red.getA());
	
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(2.930001,0.905,3.04);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(1.125,0.905,3.04);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(1.125,-0.9,3.04);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(2.93,-0.9,3.04);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Blue.getR(),Blue.getG(),Blue.getB(),Blue.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(3.04,0.905,1.125);
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(3.04,0.905,2.93);
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(3.039999,-0.900001,2.93);
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(3.04,-0.9,1.125);
	
	glEnd();
	
	};

void draw_Cube_002_Cube_003() {

	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,0.9,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,1.0,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,1.0,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,0.9,1.000001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,0.9,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.9,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.9,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.9,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-0.905,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.905,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.9,-0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.0,-0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,1.0,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,0.9,0.900001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.9,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.9,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.905,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-0.905,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.0,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.0,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.0,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.0,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.0,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.0,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,1.0,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.0,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.0,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,1.0,1.000001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.905,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.9,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.9,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.905,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.0,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.905,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.905,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.0,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.0,-0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,1.0,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.0,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,1.0,0.900001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,0.9,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,1.0,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.0,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,0.9,1.000001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.0,-0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.9,-0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,0.9,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,1.0,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.905,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.905,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-0.905,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,0.9,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.9,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.905,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.905,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,0.9,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,0.9,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-0.905,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,0.9,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.9,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.0,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.0,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.905,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.9,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.9,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.905,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.905,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,0.9,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,0.9,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.905,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.9,-0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.905,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-0.905,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,0.9,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,0.9,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,0.9,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-0.905,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-0.905,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,0.9,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-0.905,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.905,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.9,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.905,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-0.905,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.0,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.0,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.905,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.905,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.0,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-0.905,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.905,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.905,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.905,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.905,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.905,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,0.9,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-0.905,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-0.905,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,0.9,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.905,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.905,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.0,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,-0.905,0.9);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.039999,0.9,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,0.9,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.905,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,0.9,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.0,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,0.9,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-0.905,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-0.905,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.0,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.0,1.000001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.0,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.0,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.9,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.9,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.905,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.9,-0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.9,-0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.905,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.0,-0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,1.0,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.0,-0.904999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.0,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,1.0,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.905,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.9,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,0.9,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-0.905,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.9,-0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.0,-0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.0,-0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.9,-0.904999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-1.0,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.0,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-1.0,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-1.0,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,-1.0,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.9,-0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,0.9,0.900001);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.039999,0.9,0.900001);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,0.9,-0.904999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,0.9,-0.904999);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,-0.905,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.905,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,0.9,-0.904999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,-0.905,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,-0.905,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,0.9,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,0.9,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,-0.905,-0.905);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,-0.905,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.905,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,-0.905,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,1.0,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.0,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.0,0.900001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Blue.getR(),Blue.getG(),Blue.getB(),Blue.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(3.04,-0.905,-0.905);
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(3.04,0.9,-0.904999);
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(3.039999,0.9,0.900001);
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(3.04,-0.905,0.9);
	
	glEnd();
	
	};

void draw_Cube_001_Cube_002() {

	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.03,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,3.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,3.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,2.93,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,3.03,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,3.03,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,2.93,1.000001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,3.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,2.93,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,2.93,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,3.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,2.93,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.125,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.03,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,3.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,3.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,2.93,-0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,3.03,-0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,3.03,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,2.93,0.900001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,3.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,3.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,2.93,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.125,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.03,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.03,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,3.03,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,3.03,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,3.03,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,3.03,1.000001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,2.93,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.125,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.03,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,3.03,-0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,3.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,3.03,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,3.03,0.900001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,2.93,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,3.03,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,3.03,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,2.93,1.000001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,3.03,-0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,2.93,-0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,3.03,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.125,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.03,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,2.93,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.125,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,2.93,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,2.93,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.125,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,3.03,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.03,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.125,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,2.93,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.125,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,2.93,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,2.93,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,0.9);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(1.125,3.04,0.9);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(1.125,3.04,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,2.93,-0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,2.93,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.03,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,2.93,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.03,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.03,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.03,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.125,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.03,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.125,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.125,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.03,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,2.93,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,2.93,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.03,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,1.125,0.9);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.039999,2.93,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,2.93,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,2.93,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,3.03,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,2.93,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.125,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,3.03,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,3.03,1.000001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.03,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.03,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.03,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,2.93,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,3.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,3.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,2.93,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,2.93,-0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,2.93,-0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,3.03,-0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,3.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,3.03,-0.904999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,3.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,3.03,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.125,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,2.93,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,2.93,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.125,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,2.93,-0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,3.03,-0.999999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,3.03,-0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,2.93,-0.904999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.03,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.03,-1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.03,-1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,2.93,-0.904999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,2.93,0.900001);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.039999,2.93,0.900001);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,2.93,-0.904999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,2.93,-0.904999);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,1.125,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,2.93,-0.904999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.125,1.0);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,2.93,1.000001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,2.93,1.0);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,1.125,-0.905);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,1.125,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(1.125,3.04,-0.905);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(2.930001,3.04,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,3.03,-0.905);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,0.9);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,3.03,0.900001);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(2.93,3.04,0.900001);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(1.125,3.04,0.9);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(2.930001,3.04,-0.905);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(2.93,3.04,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,3.03,0.900001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,3.03,-0.905);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(White.getR(),White.getG(),White.getB(),White.getA());
	
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(2.930001,3.04,-0.905);
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(1.125,3.04,-0.905);
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(1.125,3.04,0.9);
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(2.93,3.04,0.900001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Blue.getR(),Blue.getG(),Blue.getB(),Blue.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(3.04,1.125,-0.905);
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(3.04,2.93,-0.904999);
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(3.039999,2.93,0.900001);
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(3.04,1.125,0.9);
	
	glEnd();
	
	};

void draw_Cube() {

	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.03,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,3.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,3.03,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,2.93,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,3.03,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,3.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,2.93,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,2.93,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,3.03,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,2.93,3.029999);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,2.93,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,3.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,3.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,2.93,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.125,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.125,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.03,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,3.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,3.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,2.93,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,3.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,3.03,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,2.93,2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,2.93,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,3.03,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,3.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,2.93,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.125,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.03,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.03,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,3.03,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,3.03,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,3.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,3.03,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.125,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,2.93,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,2.93,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.125,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.03,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,3.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,3.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,3.03,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,3.03,2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,2.93,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,3.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,3.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,2.93,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,3.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,2.93,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,2.93,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,3.03,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.125,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.125,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.03,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.125,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,2.93,3.03);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(2.93,2.93,3.040001);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(2.93,1.125,3.04);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.125,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,2.93,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,2.93,3.029999);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.125,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,2.93,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,2.93,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.125,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,2.93,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,2.93,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,3.03,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.03,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.125,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,2.93,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,2.93,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.125,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,2.93,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,2.93,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,2.93);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(1.125,3.04,2.93);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(1.125,3.04,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,2.93,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.125,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,2.93,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,3.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,2.93,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,2.93,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.125,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.125,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.03,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,2.93,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.125,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.125,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,2.93,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.125,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.03,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.03,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.125,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.125,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.03,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.125,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.125,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.03,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.125,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.125,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.03,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,2.93,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.125,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.125,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,2.93,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.03,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,1.125,2.93);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.039999,2.93,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,2.93,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,2.93,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,3.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,2.93,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.125,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.125,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,3.03,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,3.03,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.03,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.03,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.03,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,2.93,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,3.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,3.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,2.93,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,2.93,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,2.93,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,3.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,3.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,3.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,3.03,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,3.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,3.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,3.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,3.03,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.125,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,2.93,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,2.93,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.125,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,2.93,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,3.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,3.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,2.93,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.03,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.03,1.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.03,1.03,1.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.125,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,1.125,3.03);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(2.93,1.125,3.04);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(1.125,1.125,3.04);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,2.93,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.029999,2.93,2.930001);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.039999,2.93,2.930001);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,2.93,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,2.93,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,1.125,3.03);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(1.125,1.125,3.04);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(1.125,2.93,3.04);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,2.93,1.125);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,1.125,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,2.93,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(1.125,2.93,3.04);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glVertex3f(2.93,2.93,3.040001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,2.93,3.03);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,2.93,3.03);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,1.125,1.125);
	glNormal3f(1.0000,0.0000,0.0000);
	glVertex3f(3.04,1.125,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(3.03,1.125,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(1.125,3.04,1.125);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(2.930001,3.04,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,3.03,1.125);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(1.125,3.03,2.93);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,3.03,2.930001);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(2.93,3.04,2.930001);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(1.125,3.04,2.93);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Black.getR(),Black.getG(),Black.getB(),Black.getA());
	
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(2.930001,3.04,1.125);
	glNormal3f(0.0000,1.0000,0.0000);
	glVertex3f(2.93,3.04,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.93,3.03,2.930001);
	glNormal3f(0.0000,0.0000,0.0000);
	glVertex3f(2.930001,3.03,1.125);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(White.getR(),White.getG(),White.getB(),White.getA());
	
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(2.930001,3.04,1.125);
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(1.125,3.04,1.125);
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(1.125,3.04,2.93);
	glNormal3f(0.0000,1.0000,0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(2.93,3.04,2.930001);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Red.getR(),Red.getG(),Red.getB(),Red.getA());
	
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(2.93,1.125,3.04);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(2.93,2.93,3.040001);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(1.125,2.93,3.04);
	glNormal3f(-0.0000,-0.0000,1.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(1.125,1.125,3.04);
	
	glEnd();
	
	
	glBegin (GL_QUADS);
	
	glColor4f(Blue.getR(),Blue.getG(),Blue.getB(),Blue.getA());
	
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(3.04,1.125,1.125);
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(3.04,2.93,1.125);
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(3.039999,2.93,2.930001);
	glNormal3f(1.0000,0.0000,0.0000);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(3.04,1.125,2.93);
	
	glEnd();
	
	};

