#include <iostream>
#include "time_class.h"

using namespace std;

int main()
{
	Time time1, time2;

	cout << "Enter time objects.\nTime #1:\n";
	cin >> time1;
	cout << "Time #2:\n";
	cin >> time2;

	cout << "You enter 2 time objects: " << time1 << " " << time2 << "\n"
		<< "time#1 + time#2 = " << time1 << " + " << time2 << " = " << time1 + time2 << "\n"
		<< "Equality: " << time1 << (time1 == time2 ? "" : " NOT ") << "equals " << time2 << "\n";

	cin.ignore();
	cin.get();
	return 0;
}
