#include <iostream>
#include <string>
using namespace std;


int main()
{

	//cout << "random number 1 is " << 1 + rand() % 100 << endl;
	//cout << "random number 2 is " << 1 + rand() % 100 << endl;
	//cout << "random number 3 is " << 1 + rand() % 100 << endl;
	//cout << "random number 4 is " << 1 + rand() % 100 << endl;
	//cout << "random number 5 is " << 1 + rand() % 100 << endl;
	//cout << "random number 6 is " << 1 + rand() % 100 << endl;
	//cout << "random number 7 is " << 1 + rand() % 100 << endl;
	//cout << "random number 8 is " << 1 + rand() % 100 << endl;
	//cout << "random number 9 is " << 1 + rand() % 100 << endl;
	//cout << "random number 10 is " << 1 + rand() % 100 << endl;

	//string text;
	//getline(cin, text);
	//cout << "User entered " << text << "\nlength of text is " << text.length();

	int n1, n2;

	cout << "number1:";
	cin >> n1;
	cout << "number2:";
	cin >> n2;
	cout << endl;
	cout << endl;


	cout << "number1 + number2 = " << n1 + n2 << endl;
	cout << "number1 / number2 = ";

	try {
		if (n2 == 0) 
			throw 1;
		cout << n1 / n2 << endl;
	}
	catch (int i) {
		cout << "Error N" << i << " - division by zero;" << endl;
	}

	cout << endl;
	system("pause");
	return 0;
}