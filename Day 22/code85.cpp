#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int i, length = 0;
    bool palindrome = true;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    // Find the length of the string
    while(str[length] != '\0')
    {
        length++;
    }

    // Check for palindrome
    for(i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - i - 1])
        {
            palindrome = false;
            break;
        }
    }

    if(palindrome)
    {
        cout << "The string is a Palindrome.";
    }
    else
    {
        cout << "The string is Not a Palindrome.";
    }

    return 0;
}