#include<iostream>
#include<string>
using namespace std;
#pragma once
class shape
{
protected:
string type;
public:
string color;
virtual float area();
virtual ~shape();
shape(string clr);
};