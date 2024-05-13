#include <iostream>
#include <string>
#include "shape.h"
#include "rectangle.h"
#include "square.h"
#include "circle.h"
#include "ellipse.h"

using namespace std;


int main() {

	rectangle rect(1, 3, 3, 10);
	circle cir(2, 1, 0, 7);
	ellipse el(3, 8, 8, 10, 4);
	square squ(4, 9, 9, 3);

	/*const char* path = "rectangle.txt";
	FILE* file = nullptr;*/

	/*const char* path = "circle.txt";*/
	const char* path = "shapes.txt";
	FILE* file = nullptr;

	const int SIZE = 4;
	shape* shapes[SIZE];

	shapes[0] = &rect;
	shapes[1] = &cir;
	shapes[2] = &el;
	shapes[3] = &squ;

	for (int i = 0; i < SIZE; i++) {
		shapes[i]->save(path, file);
	}


	}




	return 0;
}