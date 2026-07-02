#include <iostream>
using namespace std;

int main()
{
    int a[10][10];
    int n;

    cout << "Enter the order of square matrix: ";
    cin >> n;

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Diagonal elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i][i] << " ";
    }

    return 0;
}