#include "StepStudent.h"
// Создайте класс Student (поля - имя типа string и возраст) и его дочерний класс StepStudent.
//У класса  StepStudent добавляется поле technologies (количество языков программирования, которыми студент владеет).
//В main() создайте объект типа StepStudent и выведите его поля на экран.

int StepStudent::getTechnologies()
{
	return technologies;
}

void StepStudent::Input()
{
	Student::Input();
	cout << "Введите количество языков програмирования, которые знает студент: ";
	cin >> technologies;
}

void StepStudent::Output()
{
	Student::Output();
	cout << "\nЗнает " << getTechnologies() << " языков.\n";
}
