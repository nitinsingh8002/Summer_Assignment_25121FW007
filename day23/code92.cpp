#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int i, j, count, max = 0;
    char maxChar;

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

        if(count > max)
        {
            max = count;
            maxChar = str[i];
        }
    }

    cout << "Maximum occurring character = " << maxChar << endl;
    cout << "Frequency = " << max;

    return 0;
}