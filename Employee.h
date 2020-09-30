#pragma once
#include <iostream>
using namespace std;

class  Employee {
	int emplNum; //номер работника
	float salary; //Зарплата работника
public:
	Employee(): emplNum(0), salary(0.0) {
		//cout << "Employee constructor";
	}

	Employee(int emplNum, float salary) {
		set_emplNum(emplNum);
		set_salary(salary);
	}

	~Employee() {
		//cout << "Employee destructor";
	}

	Employee(const Employee& obj) {
		//cout << "Copy constructor";
		this->emplNum = obj.emplNum;
		this->salary = obj.salary;
	}

	void set_emplNum(int emplNum);
	void set_salary(float salary);

	int get_emplNum();
	float get_salary();
};