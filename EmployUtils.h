#pragma once
#include "QualifiedEmployee.h"
#include <iostream>

using namespace std;

class EmployUtils {
public:
	static void get_employ(QualifiedEmployee* empl); //static-����������� - ����� �� ��������� ������ ��� ������ ������
	static QualifiedEmployee* put_employ(QualifiedEmployee* empl); // -//-
	static int get_int_value(int min, int max); // ����� �������� �� ���� ����������� ����� ���� int
	static float get_float_value(float min, float max); // ����� �������� �� ���� ����������� ����� ���� double
};