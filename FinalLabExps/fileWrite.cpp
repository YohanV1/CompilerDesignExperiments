#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ofstream outFile("output.txt");

    if (!outFile.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    outFile << "This is some text that will be written to the file." << endl;
    outFile << "Writing to files in C++ is easy!" << endl;

    outFile.close();

    cout << "Text has been written to the file successfully." << endl;

    return 0;
}
