#include "pupupu.h"
#include <iostream>
using namespace std;



int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "rus"); 
	int day, month, year;
	cout << "¬ведите текущий день мес€ц и год!\n";
	cout << "день: ";     cin >> day;
	cout << "мес€ц: ";    cin >> month;
	cout << "год: ";  cin >> year;
	CppStudio objCppstudio; 
	objCppstudio.setDate(day, month, year); 
	objCppstudio.getDate(); 
	system("pause");
	return 0;
}