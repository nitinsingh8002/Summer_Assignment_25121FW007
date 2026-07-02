#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // print spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // print increasing numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // print decreasing numbers
        for (int j = i - 1; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}