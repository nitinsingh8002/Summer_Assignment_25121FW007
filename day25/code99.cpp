#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char name[10][50], temp[50];
    int n, i, j;

    cout << "Enter the number of names: ";
    cin >> n;

    cout << "Enter the names:\n";
    for(i = 0; i < n; i++)
    {
        cin >> name[i];
    }

    // Sort names alphabetically
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    cout << "\nNames in Alphabetical Order:\n";
    for(i = 0; i < n; i++)
    {
        cout << name[i] << endl;
    }

    return 0;
}