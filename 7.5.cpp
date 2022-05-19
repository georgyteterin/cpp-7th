#include <iostream>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    ofstream object;
    object.open("practice.txt");
    object << s;
    object.close();
    return 0;
}