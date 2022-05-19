#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream fin("imstilltryingsohard.txt");
	if (!fin.is_open()) {
		cout << "fail to open" << endl;
	}
	else {
		cout << "here you are" << endl;
		string str;
		while (!fin.eof()) {
			str = "";
			getline(fin, str);
			cout << str << endl;
		}
	}
	fin.close();
	return 0;
}