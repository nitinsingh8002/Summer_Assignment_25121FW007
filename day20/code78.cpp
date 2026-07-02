#include <iostream>
using namespace std;

int main()
{
    int a[10][10], n, i, j;
    bool symmetric = true;

    cout << "Enter the order of matrix: ";
    cin >> n;

    cout << "Enter the elements of the matrix:\n";
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    // Check if matrix is symmetric
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] != a[j][i])
            {
                symmetric = false;
                break;
            }
        }
        if(symmetric == false)
        {
            break;
        }
    }

    if(symmetric)
    {
        cout << "The matrix is Symmetric.";
    }
    else
    {
        cout << "The matrix is Not Symmetric.";
    }

    return 0;
}