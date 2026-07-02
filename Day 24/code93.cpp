#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[100], str2[100], temp[200];

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    // Check if lengths are equal
    if(strlen(str1) != strlen(str2))
    {
        cout << "Strings are not rotations.";
        return 0;
    }

    // Concatenate first string with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if second string is present in temp
    if(strstr(temp, str2))
        cout << "Strings are rotations.";
    else
        cout << "Strings are not rotations.";

    return 0;
}