#include <iostream>
using namespace std;

int main()
{
	//int arr[3];
	//
	//for (int i = 0; i < 3; i++) {
	//	cin >> arr[i];
	//}
	//
	//cout << "\n" << arr << "\n" << endl;
	//
	//for (int i = 0; i < 3; i++) {
	//	cout << " " << arr[i];
	//}

	int arr[3][2] = {{23, 34}, {1, 2}, {5, 7}}; //двумерный массив

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;
	system("pause");
    return 0;
}

