#pragma once
#include "shape.h"
#include <iostream>
using namespace std;

class ellipse :public shape
{
	int _leftCornX;
	int _leftCornY;
	int _sideLengthShort;
	int _sideLengthLong;
public:
	ellipse() = default;
	ellipse(int type, int x, int y, int longSide, int shortSide) :shape(type), _leftCornX(x), _leftCornY(y), _sideLengthLong(longSide), _sideLengthShort(shortSide) {}

	void show();
	void load(const char* path, FILE* file);
	void save(const char* path, FILE* file);
};
