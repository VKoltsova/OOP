#pragma once
#include "EmployUtils.h"
#include "EType.h"

void EmployUtils::get_employ(QualifiedEmployee* empl) {
	cout << "Employee info:" << endl;
	cout << "Employee number - " << empl->get_emplNum() << endl;
	cout << "Employee salary - " << empl->get_salary() << endl;
	cout << "Employee date of entry - "
		<< empl->get_date()->get_day() << "."
		<< empl->get_date()->get_month() << "."
		<< empl->get_date()->get_year() << endl;
	cout << "Employee position - ";
	switch (empl->get_type()) {
		case EType::ANALYST: {
			cout << "ANALYST" << endl;
			break;
		}
		case EType::ASSISTANT: {
			cout << "ASSISTANT" << endl;
			break;
		}
		case EType::MANAGER: {
			cout << "MANAGER" << endl;
			break;
		}
		case EType::SECRETARY: {
			cout << "SECRETARY" << endl;
			break;
		}
		case EType::SEO: {
			cout << "SEO" << endl;
			break;
		}
	}
	cout << endl;
}

QualifiedEmployee* EmployUtils::put_employ(QualifiedEmployee* empl) { //прописать везде проверки на вводимые значения
	cout << "Enter employee number: ";
	int emplNum = get_int_value(0, INT32_MAX);
	empl->set_emplNum(emplNum);

	cout << "Enter employee salary: ";
	float salary = get_float_value(0, FLT_MAX);
	empl->set_salary(salary);

	cout << "Enter employee year of entry: ";
	int year = get_int_value(1950, 2020);
	empl->get_date()->set_year(year);

	cout << "Enter employee month of entry: ";
	int month = get_int_value(1, 12);
	empl->get_date()->set_month(month);

	cout << "Enter employee day of entry: ";
	int max;
	if (month == 4 || month == 6 || month == 9 || month == 11) {
		max = 30;
	}
	else if (month == 2) {
		if (((year % 4 == 0) && (year % 100 != 0) || ((year % 4 == 0) && (year % 100 == 0) && (year % 400 == 0)))) {
			max = 29;
		}
		else {
			max = 28;
		}
	}
	else {
		max = 31;
	}
	int day = get_int_value(0, max);
	empl->get_date()->set_day(day);

	cout << "Choose employee position': " << endl;
	cout << "1.ASSISTANT" << endl;
	cout << "2.SECRETARY" << endl;
	cout << "3.MANAGER" << endl;
	cout << "4.ANALYST" << endl;
	cout << "5.SEO" << endl;
	
	int choise = get_int_value(1, 5);
	
	//EType type;

	switch (choise) {
		case 1: {
			empl->set_type(EType::ASSISTANT);
			break;
		}
		case 2: {
			empl->set_type(EType::SECRETARY);
			break;
		}
		case 3: {
			empl->set_type(EType::MANAGER);
			break;
		}
		case 4: {
			empl->set_type(EType::ANALYST);
			break;
		}
		case 5: {
			empl->set_type(EType::SEO);
			break;
		}
		default: {
			cout << "Error, please try again";
		}
	}
	
	cout << endl;

	return empl;
}

int EmployUtils::get_int_value(int min, int max) {
	while (true) // цикл продолжается до тех пор, пока пользователь не введет корректное значение
	{
		cout << "Enter a int value (from " << min << " to " << max << "): " << endl;
		int a;
		cin >> a;

		// Проверка на предыдущее извлечение
		if (cin.fail() || a > max || a < min) // если предыдущее извлечение оказалось неудачным,
		{
			cin.clear(); // то возвращаем cin в 'обычный' режим работы
			cin.ignore(32767, '\n'); // и удаляем значения предыдущего ввода из входного буфера
			cout << "Oops, that input is invalid.  Please try again.\n";
		}
		else
		{
			cin.ignore(32767, '\n'); // удаляем лишние значения

			return a;
		}
	}
}

float EmployUtils::get_float_value(float min, float max) {
	while (true) // цикл продолжается до тех пор, пока пользователь не введет корректное значение
	{
		cout << "Enter a float value (from " << min << " to " << max << "): " << endl;
		float a;
		cin >> a;

		// Проверка на предыдущее извлечение
		if (cin.fail() || a > max || a < min) // если предыдущее извлечение оказалось неудачным,
		{
			cin.clear(); // то возвращаем cin в 'обычный' режим работы
			cin.ignore(32767, '\n'); // и удаляем значения предыдущего ввода из входного буфера
			cout << "Oops, that input is invalid.  Please try again.\n";
		}
		else
		{
			cin.ignore(32767, '\n'); // удаляем лишние значения

			return a;
		}
	}
}