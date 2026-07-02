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

        // print increasing characters
        for (char ch = 'A'; ch < 'A' + i; ch++)
        {
            cout << ch;
        }

        // print decreasing characters
        for (char ch = 'A' + i - 2; ch >= 'A'; ch--)
        {
            cout << ch;
        }

        cout << endl;
    }

    return 0;
}