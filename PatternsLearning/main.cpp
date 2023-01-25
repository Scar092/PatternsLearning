#include <iostream>
#include "singleton.cpp"
#include "linked_list.cpp"

using namespace std;

int main()
{
	/* SINGLETONE */



	cout << Robot::robot().get_battery_status() << endl;

	auto value = Robot::robot().get_current_mode();
	cout << value << endl << endl;




	/* LINKED LIST */




	List<int> list;			// creating a Linked list

	int size_of_list;
	cout << "Please, write a size you want to create linked list..." << endl;
	cin >> size_of_list;
	

	// fill the Linked list with randome date from 0 to 100

	cout << "Filling process..." << endl;
	for (int i = 0; i < size_of_list; i++)
	{
		list.push_back(rand() % 100);
	}
	cout << "Filling complete!" << endl << endl;

	// get Linked list data

	cout << "The size of the list is: " << list.get_size() << endl;
	cout << "List data:" << endl << endl;

	for (int i = 0; i < list.get_size(); i++)
	{
		cout << list[i] << endl;
	}

	cout << endl << "First element deleted!" << endl;
	list.pop_front();

	cout << "The size of the list is: " << list.get_size() << endl;
	cout << "List data:" << endl << endl;

	for (int i = 0; i < list.get_size(); i++)
	{
		cout << list[i] << endl;
	}
}
