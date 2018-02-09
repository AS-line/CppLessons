#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{

//	int user_n1, user_n2;
//	cout << "Enter 2 numbers" << endl;
//	cin >> user_n1;
//	cin >> user_n2;
//	int sum = user_n1 + user_n2;
//	int suun = user_n1 * user_n2;
//	cout << "Сумма = " << sum << endl;
//	cout << "Произведение = " << suun << endl;

//	int b;
//	cin >> b;
//	if (b == 123) {
//		cout << "All right!" << endl;
//	}
//	else {
//		cout << "No" << endl;
//	}

/*
	int int_number;
	string str_number;
	cout << "Enter int number" << endl;
	cin >> int_number;
	switch (int_number) {
	case 0:
		cout << "zero" << endl;
		break;
	case 1:
		cout << "one" << endl;
		break;
	default:
		cout << ">>>>None<<<<" << endl;
	}*/

	setlocale(LC_ALL, "rus");
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string text1, text2;
	cout << "text_1:";
	cin >> text1;
	cout << "text_2:";
	cin >> text2;
	cout << "\n" << text1 + text2 << endl;
	
	system("pause");
    return 0;
}

