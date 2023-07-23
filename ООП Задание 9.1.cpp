// Создайте класс Student (поля - имя типа string и возраст) и его дочерний класс StepStudent.
//У класса  StepStudent добавляется поле technologies (количество языков программирования, которыми студент владеет).
//В main() создайте объект типа StepStudent и выведите его поля на экран.

#include <iostream>
#include "Student.h"
#include "StepStudent.h"
#include<string.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");
    StepStudent Stud;
    Stud.Input();
    Stud.Output();

    return 0;
}