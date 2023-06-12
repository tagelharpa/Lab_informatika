#include <iostream>
#include "Pair.h"
#include "Fraction.h"

using namespace std;

void main()
{

	Pair p1, p2;
	cin >> p1;
	cout << p1;

	cin >> p2;
	cout << p2;

	string str = p1 > p2 ? "true" : "false";
	cout << "p1 > p2: " << str << "\n";
	str = p1 >= p2 ? "true" : "false";
	cout << "p1 >= p2: " << str << "\n";
	str = p1 < p2 ? "true" : "false";
	cout << "p1 < p2: " << str << "\n";
	str = p1 <= p2 ? "true" : "false";
	cout << "p1<= p2: " << str << "\n";
	str = p1 == p2 ? "true" : "false";
	cout << "p1 == p2: " << str << "\n";
	str = p1 != p2 ? "true" : "false";
	cout << "p1 != p2: " << str << "\n";

	int f = p1.Get_first();
	int s = p1.Get_second();
	f = f + ++s;
	p1.Set_first(s);
	p1.Set_second(f);
	cout << p1;


	Fraction fr1, fr2;
	cin >> fr1;
	cout << fr1;

	cin >> fr2;
	cout << fr2;

	str = fr1 > fr2 ? "true" : "false";
	cout << "fr1 > fr2: " << str << "\n";

	str = fr1 >= fr2 ? "true" : "false";
	cout << "fr1 >= fr2: " << str << "\n";

	str = fr1 < fr2 ? "true" : "false";
	cout << "fr1 < fr2: " << str << "\n";

	str = fr1 <= fr2 ? "true" : "false";
	cout << "fr1<= fr2: " << str << "\n";

	str = fr1 == fr2 ? "true" : "false";
	cout << "fr1 == fr2: " << str << "\n";

	str = fr1 != fr2 ? "true" : "false";
	cout << "fr1 != fr2: " << str << "\n";

	f = fr1.Get_first();
	s = fr1.Get_second();

	p1.Set_first(s);
	p1.Set_second(f);
	f = f + ++s;

	Fraction fr3;
	fr3 = Fraction(f, s, f / (double)s);
	cout << fr3;
}