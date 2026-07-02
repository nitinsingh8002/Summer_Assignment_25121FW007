#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char word[10][50], temp[50];
    int n, i, j;

    cout << "Enter the number of words: ";
    cin >> n;

    cout << "Enter the words:\n";
    for(i = 0; i < n; i++)
    {
        cin >> word[i];
    }

    // Sort words by length
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(strlen(word[i]) > strlen(word[j]))
            {
                strcpy(temp, word[i]);
                strcpy(word[i], word[j]);
                strcpy(word[j], temp);
            }
        }
    }

    cout << "\nWords sorted by length:\n";
    for(i = 0; i < n; i++)
    {
        cout << word[i] << endl;
    }

    return 0;
}