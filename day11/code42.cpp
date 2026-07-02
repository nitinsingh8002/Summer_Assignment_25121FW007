#include <iostream>
using namespace std;

// Function to find maximum
int maximum(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Maximum number = " << maximum(x, y);

    return 0;
}