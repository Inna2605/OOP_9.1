// �������� ����� Student (���� - ��� ���� string � �������) � ��� �������� ����� StepStudent.
//� ������  StepStudent ����������� ���� technologies (���������� ������ ����������������, �������� ������� �������).
//� main() �������� ������ ���� StepStudent � �������� ��� ���� �� �����.
#include<iostream>
#include "Student.h"
#include "StepStudent.h"
#include<string>
using namespace std;

Student::Student()
{
	full_name = "";
	age = 0;
}

int Student::getAge()
{
	return age;
}

string Student::getFull_name()
{
	return full_name;
}

void Student::Input()
{
	cout << "������� ��� ��������:\n";
	getline(cin, full_name);
	cout << "������� ������� ��������: ";
	cin >> age;
}

void Student::Output()
{
	cout << "\n\n������� " << getFull_name() << "\n�������: " << getAge();
}
