#pragma once
#include <iostream>
#include <string>
using namespace std;

class shape
{
	int _shapeType;
public:
	shape() = default;
	shape(int shapeType) :_shapeType(shapeType){}

	virtual void show() = 0;
	virtual void load(const char* path,FILE* file) = 0;
	virtual void save(const char* path,FILE* file) = 0;

	void setType(int type){
		_shapeType = type;
	}

	int getType() {
		return _shapeType;
	}


};

