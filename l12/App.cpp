#include <iostream>
using namespace std;

float value = 1.0000;

void func();

int main()
{
	float value = 2.0000;
	cout << value << endl;
	cout << ::value << endl;
	cin.get();
    return 0;
}

void func() {
	cout << value << endl;
}