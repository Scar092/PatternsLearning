#include <iostream>
#include "Singleton.cpp"

using namespace std;

int main()
{
	/* SINGLETONE */
	cout << Robot::robot().get_battery_status() << endl;

	auto value = Robot::robot().get_current_mode();
	cout << value;
}
