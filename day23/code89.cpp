#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int i, j, count;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for(i = 0; str[i] != '\0'; i++)
    {
        count = 0;

        for(j = 0; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                count++;
            }
        }

        if(count == 1)
        {
            cout << "First non-repeating character = " << str[i];
            return 0;
        }
    }

    cout << "No non-repeating character found.";

    return 0;
}