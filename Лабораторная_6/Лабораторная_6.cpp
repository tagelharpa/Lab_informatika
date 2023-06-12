﻿#include "Vector.h"
#include <iostream>

using namespace std;

void main()
{
	Vector a(5);
	cout << a << "\n";
	cin >> a;
	cout << a << "\n";
	a[2] = 100;
	cout << a << "\n";
	Vector b(10);
	cout << b << "\n";
	b = a;
	cout << b << "\n";
	Vector c(10);
	c = b + 100;
	cout << c << "\n";
	cout << "\nthe length of a=" << a() << endl;
	cout << *(a.first()) << endl;
	Iterator i = a.first();
	++i;
	cout << *i << endl;
	for (i = a.first(); i != a.last(); ++i) cout << *i << endl;
	for (i = a.first(); i != a.last(); i++) cout << *i << endl;
}
