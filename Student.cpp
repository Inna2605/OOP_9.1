// Создайте класс Student (поля - имя типа string и возраст) и его дочерний класс StepStudent.
//У класса  StepStudent добавляется поле technologies (количество языков программирования, которыми студент владеет).
//В main() создайте объект типа StepStudent и выведите его поля на экран.
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
	cout << "Введите ФИО студента:\n";
	getline(cin, full_name);
	cout << "Введите возраст студента: ";
	cin >> age;
}

void Student::Output()
{
	cout << "\n\nСтудент " << getFull_name() << "\nВозраст: " << getAge();
}
