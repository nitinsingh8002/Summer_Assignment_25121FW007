#include <iostream>
using namespace std;

int main()
{
    int num, temp, digit;
    int sum = 0, fact;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    while(temp != 0)
    {
        digit = temp % 10;
        fact = 1;

        for(int i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if(sum == num)
        cout << "Strong Number";
    else
        cout << "Not a Strong Number";

    return 0;
}