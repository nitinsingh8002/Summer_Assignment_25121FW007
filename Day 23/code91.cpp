#include <iostream>
using namespace std;

int main()
{
    char str1[100], str2[100];
    int i, j, len1 = 0, len2 = 0;
    bool anagram = true;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    // Find lengths
    while(str1[len1] != '\0')
        len1++;

    while(str2[len2] != '\0')
        len2++;

    // Check lengths
    if(len1 != len2)
    {
        cout << "Strings are not Anagrams.";
        return 0;
    }

    // Compare characters
    for(i = 0; i < len1; i++)
    {
        bool found = false;

        for(j = 0; j < len2; j++)
        {
            if(str1[i] == str2[j])
            {
                str2[j] = '*';   // Mark character as used
                found = true;
                break;
            }
        }

        if(found == false)
        {
            anagram = false;
            break;
        }
    }

    if(anagram)
        cout << "Strings are Anagrams.";
    else
        cout << "Strings are not Anagrams.";

    return 0;
}