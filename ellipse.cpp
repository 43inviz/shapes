#include "ellipse.h"

void ellipse::show()
{
	cout << "Type: " << this->getType() << endl;
	cout << "X: " << this->_leftCornX << endl;
	cout << "Y: " << this->_leftCornY << endl;
	cout << "Short side: " << this->_sideLengthShort << endl;
	cout << "Long side: " << this->_sideLengthLong << endl;
}

void ellipse::load(const char* path, FILE* file)
{
	/*const char* path = "ellipse.h";
	FILE* file = nullptr;*/
	errno_t code;
	code = fopen_s(&file, path, "r");
	if (code == 0 && file != nullptr) {
		int cornX, cornY, type, shortSide, longSide;
		while (fprintf(file, "%d %d %d %d %d", &type, &cornX, &cornY, &shortSide, &longSide) == 5) {
			this->setType(type);
			this->_leftCornX = cornX;
			this->_leftCornY = cornY;
			this->_sideLengthShort = shortSide;
			this->_sideLengthLong = longSide;
		}
	}
	else {
		cout << "We can`t open 'ellipse.txt'\n";
	}
}

void ellipse::save(const char* path, FILE* file)
{
	/*const char* path = "ellipse.txt";
	FILE* file = nullptr;*/
	errno_t code;
	code = fopen_s(&file, path, "a");
	if (code == 0) {
		fprintf(file, "%d\n", this->getType());
		fprintf(file, "%d\n", this->_leftCornX);
		fprintf(file, "%d\n", this->_leftCornY);
		fprintf(file, "%d\n", this->_sideLengthLong);
		fprintf(file, "%d\n", this->_sideLengthShort);
		fclose(file);
	}
	else {
		cout << "We can`t open 'ellipse.txt'\n";
	}
}
