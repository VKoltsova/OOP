#pragma once
#include "QualifiedEmployee.h"

void QualifiedEmployee::set_date(Date* date) {
	this->date = date;
}

void QualifiedEmployee::set_type(EType type) {
	this->type = type;
}

Date* QualifiedEmployee::get_date() {
	return this->date; //подумать о правильности
}

EType QualifiedEmployee::get_type() {
	return this->type;
}