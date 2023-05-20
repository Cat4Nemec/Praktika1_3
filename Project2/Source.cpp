#include<iostream>
#include<fstream>
class Road {
public:
	double length;
	int width;
};
int main() {
	using namespace std;
	Road road;
	std::ifstream fIn;
	fIn.open("C:\\Zajtler\\lenght.txt");
	fIn >> road.length;
	fIn.close();
	fIn.open("C:\\Zajtler\\width.txt");
	fIn >> road.width;
	fIn.close();
	std::cout << "Length: " << road.length << endl;
	std::cout << "Width: " << road.width << endl;
	return 0;
};
