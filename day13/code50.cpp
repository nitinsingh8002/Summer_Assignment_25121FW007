#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;
    int sum = 0;
    float average;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    average = sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average;

    return 0;
}