#pragma once
#include <iostream>
using namespace std;

class Date{
	int day; //день приЄма на работу
	int month; // мес€ц приЄма на работу
	int year; // год приЄма на работу
	
public:
	Date(): day(0), month(0), year(0) {
		//cout << "Date constructor";
	}
	Date(int day, int month, int year) {
		set_day(day);
		set_month(month);
		set_year(year);
		//cout << "Date constructor with params";
	}
	~Date() {
		//cout << "Date destructor";
	}
	Date(const Date& obj) {
		//cout << "Copy constructor";
		this->day = obj.day;
		this->month = obj.month;
		this->year = obj.year;
	}
	void set_day(int day);
	void set_month(int month);
	void set_year(int year);

	int get_day();
	int get_month();
	int get_year();
};