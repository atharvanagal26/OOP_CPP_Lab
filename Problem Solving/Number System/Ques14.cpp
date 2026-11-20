#include <iostream>
#include <climits>
using namespace std;

bool isPalindrome(long long n) {
    if (n < 0) return false;

    long long temp = n;
    long long reversed = 0;

    while (temp > 0) {
        int digit = static_cast<int>(temp % 10);

        // Guard against signed 64-bit overflow before multiplying by 10
        if (reversed > (LLONG_MAX - digit) / 10) {
            return false;
        }

        reversed = reversed * 10 + digit;
        temp /= 10;
    }

    return reversed == n;
}

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if (!(cin >> n)) return 0;

    if (isPalindrome(n)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}