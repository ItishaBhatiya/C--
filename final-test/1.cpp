#include<iostream>
using namespace std;

int factorial(int n) {
    if (n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Factorial series of " << n << " is: ";
    for (int i = 1; i <= n; i++) {
        cout << factorial(i) << " ";
    }
    return 0;
}

