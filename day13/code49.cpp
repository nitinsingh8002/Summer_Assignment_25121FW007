#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;

    cout << "Enter size of array: ";
    cin >> n;

    // Input array
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Display array
    cout << "Array elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}