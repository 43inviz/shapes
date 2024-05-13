#pragma once
#include "shape.h"
#include <iostream>

class circle:public shape
{
	int _centerX;
	int _centerY;
	int _radius;
public:

	circle() = default;
	circle(int type,int x,int y,int radius):shape(type),_centerX(x),_centerY(y),_radius(radius){}

	void show();
	void load(const char* path,FILE* file);
	void save(const char* path,FILE* file);
};

