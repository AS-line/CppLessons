#include <iostream>
#include <fstream>
using namespace std;

int main()
{

	ofstream file; // объект позволяет записать в файл
	// ifstream file; // объект позволяет читать файл
	file.open("text_file");
	file << "user_name:aslan";
	file.close();

	cin.get();
    return 0;
}

