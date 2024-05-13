#pragma once
#include <iostream>
#include <string>
#include "shape.h"
using namespace std;

class square:public shape
{
	int _cornerX;
	int _cornerY;
	int _sideLength;
public:

	square() = default;
	square(int shapeType,int x,int y,int side):shape(shapeType),_cornerX(x),_cornerY(y),_sideLength(side){}

	void show();
	void load(const char* path, FILE* file);
	void save(const char* path, FILE* file);
};

