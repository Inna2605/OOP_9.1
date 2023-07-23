// Создайте класс Student (поля - имя типа string и возраст) и его дочерний класс StepStudent.
//У класса  StepStudent добавляется поле technologies (количество языков программирования, которыми студент владеет).
//В main() создайте объект типа StepStudent и выведите его поля на экран.
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

