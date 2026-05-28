#include <iostream>
using namespace std;

int main()
{
    int hours;

    cout << "Enter study hours today: ";
    cin >> hours;

    if(hours >= 8)
    {
        cout << "Excellent dedication! Keep it up!";
    }
    else if(hours >= 5)
    {
        cout << "Good job! Stay consistent.";
    }
    else if(hours >= 2)
    {
        cout << "You can do better tomorrow.";
    }
    else
    {
        cout << "Start focusing on your studies!";
    }

    return 0;
}
