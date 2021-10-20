#include <iostream>

#include "PhysCalc.h"

using namespace std;

typedef enum {
	Placeholder,
	Speed,
	Exit
} input_options;

void startmenu()
{
	cout << "Evan's physics calculator" << endl;

	bool is_running = true;
	while(is_running == true) {
		cout << "\nOptions:" << endl
			<< "    1. Calculate speed" << endl
			<< "    2. Exit" << endl;

		cin.clear();
	
		short input;
		cin >> input;

		switch (input)
		{
		case Speed:
			cout << endl << "Opening the speed calculator..." << endl << endl;
			speed_calc();
			break;
		case Exit:
			cout << "Quitting..." << endl;
			is_running = false;
			break;
		default:
			cout << "Incorrect input!" << endl;
			break;
		}
	}
}