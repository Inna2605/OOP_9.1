// �������� ����� Student (���� - ��� ���� string � �������) � ��� �������� ����� StepStudent.
//� ������  StepStudent ����������� ���� technologies (���������� ������ ����������������, �������� ������� �������).
//� main() �������� ������ ���� StepStudent � �������� ��� ���� �� �����.
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

