#include <iostream>
using namespace std;

// Function to find sum
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int x, y, result;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    result = sum(x, y);

    cout << "Sum = " << result;

    return 0;
}