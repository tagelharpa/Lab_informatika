#include <iostream>
#pragma once

using namespace std;

struct fraction
{
	int first;
	int second;
	void Read(); //Метод для чтения полей
	void Show(); //Метод для вывода значения полей
	int ipart(); //Метод выделения целой части дроби
};

