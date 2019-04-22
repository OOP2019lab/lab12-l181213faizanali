#include"circle_l181213.h"
#include"rectangle_l181213.h"
#include"Shape_l181213.h"
#include"triangle_l181213.h"
circle::circle(float rad,string clr):shape(clr)
{
	radius=rad;
}
float circle::area()
{
		type="circle";
float area=3.14*radius*radius;
return area;
}
circle::~circle()
{}