#include <iostream>
using namespace std;

void swapNumbers(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "\nBefore Swapping:";
    cout << "\nX = " << x;
    cout << "\nY = " << y;

    swapNumbers(&x, &y);

    cout << "\nAfter Swapping:";
    cout << "\nX = " << x;
    cout << "\nY = " << y;

    return 0;
}
