#include <iostream>
using namespace std;

int main()
{
    char str[100], longest[100];
    int i = 0, j = 0;
    int maxLength = 0, currentLength = 0;

    cout << "Enter a sentence: ";
    cin.getline(str, 100);

    while(str[i] != '\0')
    {
        if(str[i] != ' ')
        {
            currentLength++;
        }
        else
        {
            if(currentLength > maxLength)
            {
                maxLength = currentLength;

                for(int k = 0; k < currentLength; k++)
                {
                    longest[k] = str[i - currentLength + k];
                }
                longest[currentLength] = '\0';
            }
            currentLength = 0;
        }
        i++;
    }

    // Check the last word
    if(currentLength > maxLength)
    {
        maxLength = currentLength;

        for(int k = 0; k < currentLength; k++)
        {
            longest[k] = str[i - currentLength + k];
        }
        longest[currentLength] = '\0';
    }

    cout << "Longest word = " << longest << endl;
    cout << "Length = " << maxLength;

    return 0;
}