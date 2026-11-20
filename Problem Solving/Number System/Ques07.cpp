#include <iostream>
using namespace std;

// Computes n! iteratively; returns 0 if n is negative (invalid)
long long factorial(int n) {
    if (n < 0) return -1; // Indicate undefined input for negative numbers

    long long result = 1; // Handles 0! = 1 automatically
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    if (n < 0) {
        cout << "INVALID\n";
    } else if (n > 20) {
        // For n > 20, use __int128 or modular arithmetic (e.g., mod 1e9+7)
        cout << "OVERFLOW\n";
    } else {
        cout << factorial(n) << "\n";
    }

    return 0;
}