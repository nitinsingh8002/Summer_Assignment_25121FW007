#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;
    int sum = 0, total;

    cout << "Enter value of n: ";
    cin >> n;

    cout << "Enter " << n - 1 << " elements: ";
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    total = n * (n + 1) / 2;

    cout << "Missing number = " << total - sum;

    return 0;
}