#pragma once
#include <iostream>
using namespace std;
class Date {
private:
	int day, month, year;
public:
	Date(int day = 1, int month = 1, int year = 2016);
	void display();
};