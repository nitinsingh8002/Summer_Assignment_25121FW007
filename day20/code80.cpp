#include <iostream>
using namespace std;

int main()
{
    int a[10][10], rows, cols, i, j, sum;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> cols;

    cout << "Enter the elements of the matrix:\n";
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "\nColumn-wise Sum:\n";

    for(j = 0; j < cols; j++)
    {
        sum = 0;
        for(i = 0; i < rows; i++)
        {
            sum = sum + a[i][j];
        }
        cout << "Sum of Column " << j + 1 << " = " << sum << endl;
    }

    return 0;
}