// Создайте класс Student (поля - имя типа string и возраст) и его дочерний класс StepStudent.
//У класса  StepStudent добавляется поле technologies (количество языков программирования, которыми студент владеет).
//В main() создайте объект типа StepStudent и выведите его поля на экран.
#pragma once
#include "Student.h"
class StepStudent : public Student
{
private:
	int technologies;
public:
	
	int getTechnologies();

	void Input();
	void Output();
};

