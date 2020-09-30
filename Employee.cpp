#pragma once
#include "Employee.h"
#include <iostream>

void Employee::set_emplNum(int emplNum) {
	this->emplNum = emplNum;
}

void Employee::set_salary(float salary) {
	this->salary = salary;
}

int Employee::get_emplNum() {
	return this->emplNum;
}

float Employee::get_salary() {
	return this->salary;
}