#pragma once
#include <iostream>
#include "QualifiedEmployee.h"
#include "EmployUtils.h"
#include "Employee.h"

 #define SIZE 2 // размер массива работников

int main()
{
	QualifiedEmployee** arr = new QualifiedEmployee*[SIZE]; //создание массива работников
	for (int i = 0; i < SIZE; i++) {
		arr[i] = new QualifiedEmployee();
		EmployUtils::put_employ(arr[i]);
	}
	cout << "\n\n";
	for (int i = 0; i < SIZE; i++) {
		cout << (i+1) << ".";
		EmployUtils::get_employ(arr[i]);
		cout << endl;
	}
	return 0;
}
