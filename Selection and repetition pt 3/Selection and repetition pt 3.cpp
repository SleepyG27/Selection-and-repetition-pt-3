
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    string LastName, Grade;
    ifstream FileIn1("File1.txt");
    ifstream FileIn2("File2.txt");
    ofstream FileOut("GradeBook.txt");

    while (getline(FileIn1, LastName) && getline(FileIn1, Grade))
    {
        FileOut << LastName << " " << Grade << endl;
    }

    while (getline(FileIn2, LastName) && getline(FileIn2, Grade))
    {
        FileOut << LastName << " " << Grade << endl;

    }

    FileIn1.close();
    FileIn2.close();
    FileOut.close();

    return 0;
}
