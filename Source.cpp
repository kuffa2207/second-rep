#include "pupupu.h"
#include <iostream>
using namespace std;



int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "rus"); 
	int day, month, year;
	cout << "������� ������� ���� ����� � ���!\n";
	cout << "����: ";     cin >> day;
	cout << "�����: ";    cin >> month;
	cout << "���: ";  cin >> year;
	CppStudio objCppstudio; 
	objCppstudio.setDate(day, month, year); 
	objCppstudio.getDate(); 
	system("pause");
	return 0;
}