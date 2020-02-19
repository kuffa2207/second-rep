#pragma once
#include <iostream>

using namespace std;

class CppStudio
{
private:
	int day,
		month,
		year;
public:

	void setDate(int date_day, int date_month, int date_year)
	{
		day = date_day;
		month = date_month;
		year = date_year;
	}
	void getDate()
	{
		cout << "Date: " << day << "." << month << "." << year << endl;
	}
};