#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int i, j;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for(i = 0; str[i] != '\0'; i++)
    {
        for(j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                cout << "First repeating character = " << str[i];
                return 0;
            }
        }
    }

    cout << "No repeating character found.";

    return 0;
}