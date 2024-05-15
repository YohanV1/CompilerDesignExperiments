#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    ifstream inFile("output.txt");

    if (!inFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();
    return 0;
}
