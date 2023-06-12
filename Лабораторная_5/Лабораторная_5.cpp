#include <iostream>
#include "Pair.h"
#include "Fraction.h"
#include "Vector.h"
#include "object.h"
using namespace std;

void main()
{
	Vector v(5);//вектор из 5 элементов
	Pair a;//объект класса Car
	cin >> a;
	Fraction b;// объект класса Lorry
	cin >> b;
	Object* p = &a;//ставим указатель на объект класса Car
	v.Add(p);//добавляем объект в вектор
	p = &b;//ставим указатель на объект класса Lorry
	v.Add(p); //добавляем объект в вектор
	cout << v;//вывод вектора

}
