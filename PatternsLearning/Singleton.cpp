/*This is the first file, that represents the Singleton Pattern*/
#include <iostream>
#include <string>

using namespace std;

class Car {
public:
	void set_model(string mod) {
		model = mod;
	}
	string get_model() {
		return model;
	}
private:
	string model;
	int reg_num;
	string engine;
};