#include <iostream>
#include "Fraction.h"
#include <cstdlib>

using namespace std;

void fraction::Read() //���������� ������ ��� ������ �������� �����
{
	cout << "\n������� �������� ��������� - ";
	cin >> first;
	cout << "������� �������� ����������� - ";
	cin >> second;
	if (second == 0)
	{
		cout << "\n������! ����������� ����� 0" << endl;
		exit(0);
	}

}

void fraction::Show() //���������� ������ ��� ������ �������� ����� ���������
{
	cout << "\n��������� = " << first;
	cout << "\n����������� = " << second << endl;
}

int fraction::ipart() //����� ��������� ����� ����� �����
{
	return first / second;
}
