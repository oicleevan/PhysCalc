#include <iostream>
#include <regex>
#include <string>

#include "PhysCalc.h"

using namespace std;

bool is_integer(const string s) {
	return regex_match(s, regex("[(-|+)|][0-9]+"));
}

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
			break;
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
}