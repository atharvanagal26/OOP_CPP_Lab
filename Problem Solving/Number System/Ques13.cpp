#include <iostream>
#include <cstdlib>
using namespace std;

long long productOfDigits(long long n) {
    if (n == 0) return 0;

    long long val = llabs(n);
    long long product = 1;

    while (val > 0) {
        int digit = static_cast<int>(val % 10);
        if (digit == 0) {
            return 0; // Any zero digit forces the product to 0
        }
        product *= digit;
        val /= 10;
    }

    return product;
}

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if (!(cin >> n)) return 0;

    cout << productOfDigits(n) << "\n";

    return 0;
}