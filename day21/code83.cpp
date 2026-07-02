#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int i = 0, vowels = 0, consonants = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    while(str[i] != '\0')
    {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
               str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        i++;
    }

    cout << "Number of Vowels = " << vowels << endl;
    cout << "Number of Consonants = " << consonants << endl;

    return 0;
}