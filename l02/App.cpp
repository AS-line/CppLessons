#include <iostream>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "Russian");

	for (int i = 0; i < 10; i++) {
		cout << i << endl;
	}

	cout << endl;
	cout << endl;
	cout << endl;

	int x = 0;
	do {
		cout << x << endl;
		x++;
	} while (x < 10);

	cout << endl;
	cout << endl;
	cout << endl;

	x = 0;
	while (x < 10) {
		cout << x << endl;
		x++;
	}

	system("pause");
    return 0;
}

