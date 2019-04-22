#include"circle_l181213.h"
#include"rectangle_l181213.h"
#include"Shape_l181213.h"
#include"triangle_l181213.h"
triangle::triangle(float bs,float hei,string clr):shape(clr)
{
	type="triangle";
	base=bs;
	height=hei;
}
float triangle::area()
{
float area =0.5*base*height;
return area;
}
triangle::~triangle()
{}