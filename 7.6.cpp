#include <iostream>
#include <string>
#include <clocale>
#include <fstream>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "rus");
	string line;
	ifstream fin("wow_it's_alreadY_7.6.txt");
	if (!fin.is_open()) {
		cout << "fail to open" << endl;
	}
	else {
		cout << "here you are\n" << endl;
		while (getline(fin, line))
		{
			cout << line << endl;
		}

		fin.seekg(0, ios_base::end);
		cout << "Размер файла (в байтах): " << fin.tellg()<<endl;

	}
	fin.close();
	return 0;
}