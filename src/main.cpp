#include <iostream>

#include "Main.h"

using namespace std;

typedef enum {
	Placeholder,
	Speed,
	Energy,
	Exit
} input_options;

void startmenu()
{
	cout << "Evan's physics calculator" << endl;

	bool is_running = true;
	while(is_running == true) {
		cout << "\nOptions:" << endl
			<< "    1. Calculate speed" << endl
			<< "    2. Calculate energy" << endl
			<< "    3. Exit" << endl;

		cin.clear();
	
		short input;
		cin >> input;

		switch (input)
		{
		case Speed:
			cout << endl << "Opening the speed calculator..." << endl << endl;
			speed_calc();
			break;
		case Energy:
			cout << endl << "Opening the energy calculator..." << endl << endl;
			calc_energy();
			break;
		case Exit:
			cout << "Exiting..." << endl;
			is_running = false;
			break;
		default:
			cout << "Incorrect input!" << endl;
			break;
		}
	}

	return;
}

int main()
{
	startmenu();

	return 0;
}