#include <iostream>
#include "Fraction.h"


using namespace std;


void main()
{
	setlocale(LC_ALL, "Russian");

	while (true) //Для удобства проверки программы создаем цикл
	{
		fraction A; // Определение переменной A
		A.Read(); // Ввод полей переменных A
		A.Show(); // Вывод значений переменных A
		cout << endl;
		cout << "Целое число = " << A.ipart() << endl;
	}

}

