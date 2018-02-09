#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

struct Create_year {
	int year;
	string creater;
};

struct Auto {
	int wheels;
	int speed;
	float fuel_bank;
	string color;
	Create_year create;
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//
	//string text;
	//cin >> text;
	//cout << text.length() << endl;
	//cout << text << endl;

	Auto lada; // создаем объект lada и присваеваем ему след значения
	lada.wheels = 4;
	lada.speed = 120;
	lada.fuel_bank = 35.5;
	lada.color = "yellow";
	lada.create.year = 2002;
	lada.create.creater = "USSR";

	Auto bmw = { 4, 300, 42.35, "black", 1916, "Франц Джозеф Попп" }; // создаём объект bmw и присваеваем ему значения др способом

	lada.color = "pink";

	cout << "lada:" << "\n" << "speed: " << lada.speed << "\n" << "fuel bank: " << lada.fuel_bank << "\ncolor: " << lada.color << endl;
	cout << "\n\n";
	cout << "bmw:" << "\n" << "speed: " << bmw.speed << "\n" << "fuel bank: " << bmw.fuel_bank << "\ncolor: " << bmw.color << endl;
	cout << "\n\n" << "lada year: " << lada.create.year << "\nlada creater: " << lada.create.creater << endl;

	cout << "\n\n" << "bmw year: " << bmw.create.year << "\nbmw creater: " << bmw.create.creater << endl;


	system("pause");
    return 0;
}