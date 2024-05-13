#include "rectangle.h"
#include <iostream>

void rectangle::show()
{
	cout << "Type: " << this->getType() << endl;
	cout << "X: " << _cornerX << endl;
	cout << "Y: " << _cornerY << endl;
	cout << "Side length: " << _sideLength << endl;


}

void rectangle::load(const char* path, FILE* file)
{
	/*const char* path = "rectangle.txt";
	FILE* file = nullptr;*/
	errno_t code;
	code = fopen_s(&file, path, "r");
	if (code == 0 && file!= nullptr) {
		int cornX, cornY,sideLength,typeName;
		while (fscanf_s(file, "%d %d %d %d",&typeName, &cornX, &cornY, &sideLength) == 4) {
			this->setType(typeName);
			this->_cornerX = cornX;
			this->_cornerY = cornY;
			this->_sideLength = sideLength;

		}
		fclose(file);
	}
	else{
		cout << "We can`t open 'rectangle.txt'\n";
	}


}

void rectangle::save(const char* path, FILE* file)
{
	/*const char* path = "rectangle.txt";
	FILE* file = nullptr;*/
	errno_t code;
	code = fopen_s(&file, path, "a");
	if (code == 0) {
		
		fprintf(file, "%d\n", this->getType());
		fprintf(file, "%d\n", this->_cornerX);
		fprintf(file, "%d\n", this->_cornerY);
		fprintf(file, "%d\n", this->_sideLength);
		fclose(file);
	}
	else {
		cout << "We can`t open 'rectangle.txt'\n";
	}
}


