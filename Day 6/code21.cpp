#include <iostream>
using namespace std;

int main() {
    int n, binary = 0, place = 1;

    cout << "Enter a decimal number: ";
    cin >> n;

    while (n > 0) {
        int remainder = n % 2;
        binary = binary + remainder * place;
        place = place * 10;
        n = n / 2;
    }

    cout << "Binary number = " << binary;

    return 0;
}