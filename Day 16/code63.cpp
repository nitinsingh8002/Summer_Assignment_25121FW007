#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, sum;
    int found = 0;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter required sum: ";
    cin >> sum;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                cout << "Pair found: " << arr[i] << " " << arr[j] << endl;
                found = 1;
            }
        }
    }

    if (found == 0)
    {
        cout << "No pair found";
    }

    return 0;
}