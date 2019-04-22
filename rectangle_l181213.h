#include<iostream>
#include"Shape_l181213.h"
#include<string>
using namespace std;
#pragma once
class rectangle:public shape
{
private:
	float length;
	float width;
public:
	virtual float area();
rectangle(float l,float w,string clr);
virtual ~rectangle(); 
};