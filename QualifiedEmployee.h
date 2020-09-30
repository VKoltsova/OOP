#pragma once
#include <iostream>
#include "Employee.h"
#include "Date.h"
#include "EType.h"
using namespace std;

class QualifiedEmployee : public Employee {
	Date* date;
	EType type;
public:
	QualifiedEmployee() {
		//cout << "QualifiedEmployee constructor";
		set_date(new Date(0, 0, 0));
		this->set_type(EType::ASSISTANT);
	}
	QualifiedEmployee(int emplNum, float salary, Date* date, EType type) :Employee(emplNum, salary) {
		set_date(date);
		set_type(type);
	}
	~QualifiedEmployee() {
		//cout << "QualifiedEmployee destructor";
	}
	QualifiedEmployee(const QualifiedEmployee& obj) : Employee(obj){
		//cout << "QualifiedEmployee copy constructor";
		this->date = obj.date;
		this->type = obj.type;
	}
	void set_date(Date* date);
	void set_type(EType type);

	Date* get_date();
	EType get_type();
};

