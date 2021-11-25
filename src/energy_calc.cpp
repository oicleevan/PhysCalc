#include <iostream>
#include <string>
#include <cmath>

#include "calculators.h"

using namespace std;

typedef enum
{
	Placeholder,
	KE,
	GPE,
	EPE,
	Exit
} energy_types;

long double ke_calc (long double m, long double v)
{
	return((0.5 * m) * (pow(v, 2.0)));
}

long double gpe_calc(long double m, long double h)
{
	return (m * 9.8 * h);
}

long double kinetic_energy()
{
	string		input;
	long double	mass;
	long double	speed;

	cout << "Kinetic Energy formula: 1/2mv^2" << endl;

	cout << "\nValue m (kg): ";

	while (true)
	{
		cin >> input;

		if (is_integer(input)) {
			mass = stol(input);
			break;
		}
		else
		{
			cout << "Incorrect input!" << endl;
		}
	}

	cout << "\nValue v (m/s): " ;

	while (true)
	{
		cin >> input;

		if (is_integer(input)) {
			speed = stol(input);
			break;
		}
		else
		{
			cout << "Incorrect input!" << endl;
		}
	}

	// calculate
	return ke_calc(mass, speed);
}

long double gpe_energy()
{
	string		input;
	long double	mass;
	long double	height;

	cout << "Value m (kg): ";

	while (true)
	{
		cin >> input;

		if (is_integer(input)) {
			mass = stol(input);
			break;
		}
		else
		{
			cout << "Incorrect input!" << endl;
		}
	}

	cin.clear();

	cout << "Value h (meters): ";

	while (true)
	{
		cin >> input;

		if (is_integer(input)) {
			height = stol(input);
			break;
		}
		else
		{
			cout << "Incorrect input!" << endl;
		}
	}

	// calculate
	return gpe_calc(mass, height);
}

void calc_energy()
{
	bool is_running = true;
	while (is_running) {
		cout << "What energy do you want to calculate?" << endl;
		cout << "    1. Kinetic Energy" << endl
			<< "    2. Gravitational Potential Energy" << endl
			<< "    3. Elastic Potential Energy" << endl
			<< "    4. Exit" << endl;

		int			input;
		long double output;

		do {
			cin.clear();
			cin >> input;

			switch (input) {
			case KE:
				output = kinetic_energy();
				break;
			case GPE:
				output = gpe_energy();
				break;
			case EPE:
				cout << "Coming soon!" << endl;
				exit(EXIT_SUCCESS);
			case Exit:
				cout << "Exiting..." << endl;
				is_running = false;
				break;
			default:
				cout << "Please specify a proper option." << endl;
				break;
			}

		} while (input >> 1 && input << 3);

		if(input != 3 && output != NULL) {
			cout << "\nThe result is in: " << output << " J\n" << endl;

			cin.clear();
			input = 0;
		}
	}

	return;
}
