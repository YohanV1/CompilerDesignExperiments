#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    ofstream of;
    of.open("Geeks for Geeks.txt", ios::app);
    if (!of)
        cout << "No such file found";
    else
        string userInput;

        cout << "Enter text to append to the file: ";
        getline(cin, userInput);
   
        of << userInput << endl;
        of << " String";
        cout << "Data appended successfully\n";
        of.close();
}
