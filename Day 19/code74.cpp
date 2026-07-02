#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int rows, cols;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    cout << "Enter first matrix:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Enter second matrix:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> b[i][j];
        }
    }

    // Subtract matrices
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }

    cout << "Difference of matrices:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}