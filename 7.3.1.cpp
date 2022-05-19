#include <iostream>
#include <string>
#include <clocale>
#include <fstream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");
    int n = 1000;

    char* buffer = new char[n + 1]; buffer[n] = 0;
    ifstream file("7.3.1.txt");

    file.read(buffer, n);
    cout << buffer;
    file.close();

    return 0;
}
