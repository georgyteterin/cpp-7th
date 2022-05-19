#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("myfile.txt");
    if (!fout.is_open()) {
        cout << "fail to open" << endl;
    }
    else {
        fout << "here you are";
    }
    fout.close(); 
    return 0;
}

//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main()
//{
//    ofstream object;
//    object.open("practice.txt");
//    object << "Цифровой практикум";
//    object.close();
//    return 0;
//}