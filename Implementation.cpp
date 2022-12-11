#include "Header.h"

Date::Date(int day, int month, int year) {
	this->day = day;
	this->month = month;
	this->year = year;
}
void Date::display() {
	cout << day << "/" << month << "/" << year << endl;
}