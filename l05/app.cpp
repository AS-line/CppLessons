#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

int fact(int number) {
	long int factorial = 1;
	for (int i = 1; i < number; i++) {
		factorial += factorial * i;
	}
	return factorial;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int num;
	cin >> num;
	cout << fact(num) << endl;

	system("pause");
    return 0;
}

