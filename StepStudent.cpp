#include "StepStudent.h"
// �������� ����� Student (���� - ��� ���� string � �������) � ��� �������� ����� StepStudent.
//� ������  StepStudent ����������� ���� technologies (���������� ������ ����������������, �������� ������� �������).
//� main() �������� ������ ���� StepStudent � �������� ��� ���� �� �����.

int StepStudent::getTechnologies()
{
	return technologies;
}

void StepStudent::Input()
{
	Student::Input();
	cout << "������� ���������� ������ ���������������, ������� ����� �������: ";
	cin >> technologies;
}

void StepStudent::Output()
{
	Student::Output();
	cout << "\n����� " << getTechnologies() << " ������.\n";
}
