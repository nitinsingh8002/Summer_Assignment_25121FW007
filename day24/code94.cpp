#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int i, count;

    cout << "Enter a string: ";
    cin >> str;

    for(i = 0; str[i] != '\0'; i++)
    {
        count = 1;

        while(str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        cout << str[i] << count;
    }

    return 0;
}