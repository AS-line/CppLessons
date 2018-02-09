#include <iostream>
#include <string>
using namespace std;

int main()
{
	//int value = 808;
	//int *ptrvalue = &value;
	//cout << *ptrvalue << endl;
	//cout << value;

	//int arr_i = rand() % 66 + 11;
	//
	//int *ptrarr = new int[arr_i];
	//
	//for (int i = 0; i < arr_i; i++) {
	//	ptrarr[i] = rand() % 123 + 1;
	//}
	//cout << "AAAAAAASSSSSSSSSSSSSSSSSSAAAAAAAAAAAAAAA" << endl;
	//for (int i = 0; i < arr_i; i++) {
	//	cout << ptrarr[i] << " ";
	//}
	//
	//
	//
	//cout << "\nAAAAAAASSSSSSSSSSSSSSSSSSAAAAAAAAAAAAAAA" << endl;
	//
	//arr_i = rand() % 66 + 11;
	//
	//for (int i = 0; i < arr_i; i++) {
	//	ptrarr[i] = rand() % 123 + 1;
	//}
	//
	//for (int i = 0; i < arr_i; i++) {
	//	cout << ptrarr[i] << " ";
	//}
	//
	//delete[] ptrarr;
	
	string text = "Hell";
	string *ptr_text = &text;
	cout << "text - " << text << endl;
	cout << "*ptr_text - " << *ptr_text << endl;
	cout << "ptr_text - " << ptr_text << endl;
	cout << "&text - " << &text << endl;
	cout << "&ptr_text - " << &ptr_text << endl;
	cout << "&*ptr_text - " << &*ptr_text;

	cout << endl;
	system("pause");
    return 0;
}

