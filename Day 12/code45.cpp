#include <iostream>
using namespace std;

void palindrome(int n)
{
    int original = n;
    int reverse = 0;

    while (n > 0)
    {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (original == reverse)
        cout << "Palindrome number";
    else
        cout << "Not a palindrome number";
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    palindrome(n);

    return 0;
}