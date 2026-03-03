
#include <iostream>
using namespace std;

int sumOfDigits(int n) {

    // Base Case
    if (n == 0)
        return 0;

    // Recursive Case
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    cout << sumOfDigits(12345);
    return 0;
}
