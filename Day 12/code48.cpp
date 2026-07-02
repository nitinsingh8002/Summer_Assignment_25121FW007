#include <iostream>
using namespace std;

void perfect(int n)
{
    int sum = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == n)
        cout << "Perfect number";
    else
        cout << "Not a perfect number";
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    perfect(n);

    return 0;
}