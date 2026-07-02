#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;
    int largest, secondLargest;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    largest = arr[0];
    secondLargest = arr[0];

    // Find largest element
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    // Find second largest element
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > secondLargest && arr[i] < largest)
        {
            secondLargest = arr[i];
        }
    }

    cout << "Second Largest Element = " << secondLargest;

    return 0;
}