#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;
    int maxCount = 0, element;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int count = 1;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count > maxCount)
        {
            maxCount = count;
            element = arr[i];
        }
    }

    cout << "Element with maximum frequency = " << element << endl;
    cout << "Frequency = " << maxCount;

    return 0;
}