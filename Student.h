// �������� ����� Student (���� - ��� ���� string � �������) � ��� �������� ����� StepStudent.
//� ������  StepStudent ����������� ���� technologies (���������� ������ ����������������, �������� ������� �������).
//� main() �������� ������ ���� StepStudent � �������� ��� ���� �� �����.
#pragma once
#include<iostream>
using namespace std;

class Student
{
private:
	string full_name;
	int age;
public:
	Student();

	int getAge();
	string getFull_name();

	void Input();
	void Output();
};

