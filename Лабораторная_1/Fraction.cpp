#include <iostream>
#include "Fraction.h"
#include <cstdlib>

using namespace std;

void fraction::Read() //Реализация метода для чтения значений полей
{
	cout << "\nВведите значение числителя - ";
	cin >> first;
	cout << "Введите значение знаменателя - ";
	cin >> second;
	if (second == 0)
	{
		cout << "\nОшибка! Знаменатель равен 0" << endl;
		exit(0);
	}

}

void fraction::Show() //Реализация метода для вывода значений полей структуры
{
	cout << "\nЧислитель = " << first;
	cout << "\nЗнаменатель = " << second << endl;
}

int fraction::ipart() //Метод выделения целой части дроби
{
	return first / second;
}
