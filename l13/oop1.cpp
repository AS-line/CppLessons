#include <iostream>
#include <string>
using namespace std;

class Auto {
private:
	string name;
	int wheels, year, speed;
public:
	Auto() { // конструктор deafult
		name = "Null";
		wheels = NULL;
		year = NULL;
		speed = NULL;
	}

	Auto(string user_name, int wheels_count, int year_created, int speed_level) { // конструктор с заданными параметрами
		name = user_name;
		wheels = wheels_count;
		year = year_created;
		speed = speed_level;
	}

	~Auto() {
		cout << "Object is decreated" << endl;
	}

	void set(string user_name, int wheels_count, int year_created, int speed_level) {
		name = user_name;
		wheels = wheels_count;
		year = year_created;
		speed = speed_level;
	}

	void message() {
		cout << "Class is working" << endl;
	}

	void get_vals() {
		cout << "NAME: " << name << endl;
		cout << "Count of wheels - " << wheels << "\nCar created in " << year << "\nSpeed: " << speed << endl;
	}
//private:
//protected:
};

int main()
{
	Auto shkoda("Alexander", 4, 1999, 210);
	cout << endl;
	shkoda.get_vals();

	cout << endl;
	Auto bmw; // не указаны параметры, поэтому будут использованы значения deafult
	//bmw.set("Vladimir", 4, 1995, 310);
	cout << endl;
	bmw.get_vals();

	cin.get();
    return 0;
}

	//shkoda.set("Shkoda", 4, 1999, 210);