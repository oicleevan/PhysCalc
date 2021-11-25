#include <iostream>
#include <string>

#include "calculators.h"

using namespace std;

long double calculate(long double dis, long double time)
{
	return(dis / time);
}

void speed_calc()
{
	string		input;
	long double	distance;
	long double	time;

	cout << "Speed calculator: change in distance/change in time\n" << endl;
	
	while(true) {
		cout << "Distance variable: ";

		cin >> input;
		if (is_integer(input))
		{
			distance = stol(input);
		}
		else
		{
			cout << "Please input a real number!" << endl;
		}
	}

	cin.clear();

	while(true) {
		cout << "Time variable: ";

		cin >> input;
		if (is_integer(input))
		{
			time = stol(input);
			break;
		}
		else
		{
			cout << "Please input a real number!" << endl;
		}
	}

	cout << "\nThe result is: " << calculate(distance, time) << "!" << endl;

	return;
}