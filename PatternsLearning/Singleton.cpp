/*This file represents the Singleton Pattern.*/

#include <iostream>
#include <string>

using namespace std;

class Robot 
{
public:

	/*--------------------------------------------------------------------------*/
	/*						       PUBLIC SECTION                               */

	static Robot &robot()						   	 // creating an object
	{						 
		static Robot robocop;
		return robocop;
	}

	Robot(const Robot&) = delete;					 // delete copy constructor
	Robot & operator = (const Robot&) = delete;		 // delete assign operator

	/*                          END OF PUBLIC SECTION                           */
	/*--------------------------------------------------------------------------*/

	double get_battery_status() 
	{
		return battery_status;
	}

	int get_current_mode() 
	{
		return current_mode;
	}

private:

	/*--------------------------------------------------------------------------*/
	/*							  PRIVATE SECTION								*/

	Robot() = default;								 // hide the default constructor

	/*							END OF PRIVATE SECTION							*/
	/*--------------------------------------------------------------------------*/

	double battery_status{100.00};
	int current_mode{2};
};