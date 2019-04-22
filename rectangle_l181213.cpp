#include"circle_l181213.h"
#include"rectangle_l181213.h"
#include"Shape_l181213.h"
#include"triangle_l181213.h"
rectangle::rectangle(float l,float w,string clr):shape(clr)
{
length=l;
width=w;

}
float rectangle::area()
{
		type="rectangle";
float area =width*length;
return area;
}
rectangle::~rectangle()
{}