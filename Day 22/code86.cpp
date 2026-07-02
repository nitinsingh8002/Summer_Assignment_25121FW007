#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int i, words = 1;

    cout << "Enter a sentence: ";
    cin.getline(str, 100);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            words++;
        }
    }

    cout << "Number of words = " << words;

    return 0;
}