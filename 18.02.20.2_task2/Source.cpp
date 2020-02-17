#include <iostream>
#include <conio.h>

using namespace std;

class perAndS {
private:
	int a;
	int b;
public:
	void GetA();
	void GetB();
	int RArea() {
		return a * b;
	}
	int RPerimeter() {
		return (a + b) * 2;
	}
};

void perAndS::GetA() {
	cin >> a;
}

void perAndS::GetB() {
	cin >> b;
}

int main() {
	perAndS R1;
	R1.GetA();
	R1.GetB();
	cout << "Area: " << R1.RArea() << ", Perimeter: " << R1.RPerimeter() << endl;
	getchar();
	getchar();
	return 0;
}