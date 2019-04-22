#include"Shape_l181213.h"
using namespace std;
#pragma once
class triangle:public shape
{
private:
	float base;
	float height;
public:
	virtual float area();
	triangle(float bs,float hei,string clr);
	virtual ~triangle();
};