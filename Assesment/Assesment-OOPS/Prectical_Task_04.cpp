#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream writeFile;
    ifstream readFile;
    string goal;

    writeFile.open("goals.txt", ios::app);

    cin.ignore();

    cout << "Enter your daily goal: ";
    getline(cin, goal);

    writeFile << goal << endl;

    writeFile.close();

    cout << "\nSaved Goals:\n";

    readFile.open("goals.txt");

    while(getline(readFile, goal))
    {
        cout << goal << endl;
    }

    readFile.close();

    return 0;
}
