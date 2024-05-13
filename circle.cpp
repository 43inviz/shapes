#include "circle.h"

void circle::show()
{
	cout << "Type: " << this->getType() << endl;
	cout << "center X: " << _centerX << endl;
	cout << "Center Y: " << _centerY << endl;
	cout << "Radius: " << _radius << endl;
}

void circle::load(const char* path, FILE* file)
{
	/*const char* path = "circle.txt";
	FILE* file = nullptr;*/
	errno_t code;
	code = fopen_s(&file, path, "r");
	if (code == 0 && file!= nullptr) {
		int centerX, centerY, radius, type;
		while (fscanf_s(file, "%d %d %d %d", &type, &centerX, &centerY, &radius) == 4) {
			this->setType(type);
			this->_centerX = centerX;
			this->_centerY = centerY;
			this->_radius = radius;
		}
		fclose(file);
	}
	else {
		cout << "We can`t open (circle)file\n";
	}
}

void circle::save(const char* path, FILE* file)
{
	/*const char* path = "circle.txt";
	FILE* file = nullptr;*/
	errno_t code;
	code = fopen_s(&file, path, "a");
	if (code == 0) {
		fprintf(file, "%d\n", this->getType());
		fprintf(file, "%d\n", this->_centerX);
		fprintf(file, "%d\n", this->_centerY);
		fprintf(file, "%d\n", this->_radius);
		fclose(file);
	}
	else {
		cout << "We can`t open 'circle.txt'\n";
	}
}

