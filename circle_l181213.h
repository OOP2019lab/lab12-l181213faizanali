#include"Shape_l181213.h"
using namespace std;
#pragma once
class circle:public shape
{
private:
	float radius;
public:
	circle(float rad,string clr);
	virtual float area();
	virtual ~circle();
};