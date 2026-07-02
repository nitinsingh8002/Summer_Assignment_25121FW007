#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;
    int even = 0, odd = 0;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even elements = " << even << endl;
    cout << "Odd elements = " << odd << endl;

    return 0;
}