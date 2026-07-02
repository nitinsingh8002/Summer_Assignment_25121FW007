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
                // Shift characters to the left
                for(int k = j; str[k] != '\0'; k++)
                {
                    str[k] = str[k + 1];
                }
                j--;   // Check the new character at position j
            }
        }
    }

    cout << "String after removing duplicates: " << str;

    return 0;
}