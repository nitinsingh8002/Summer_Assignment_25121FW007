#include <iostream>
using namespace std;

void armstrong(int n)
{
    int original = n;
    int sum = 0;

    while (n > 0)
    {
        int digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }

    if (sum == original)
        cout << "Armstrong number";
    else
        cout << "Not an Armstrong number";
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    armstrong(n);

    return 0;
}