#pragma once
#include "shape.h"
#include <iostream>
#include <string>
using namespace std;

class rectangle:public shape
{
	int _sideLength;
	int _cornerX;
	int _cornerY;

public:
	rectangle() = default;
	rectangle(int shapeType,int x,int y,int side):shape(shapeType),_cornerX(x),_cornerY(y), _sideLength(side) {}

	

	void show();
	void load(const char* path, FILE* file);
	void save(const char* path, FILE* file);

	


};

