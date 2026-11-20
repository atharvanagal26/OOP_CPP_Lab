#include <iostream>
#include <numeric> // Required for std::gcd in C++17 and later
using namespace std;

bool areCoPrime(long long a, long long b) {
    return std::gcd(a, b) == 1;
}

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b;
    if (!(cin >> a >> b)) return 0;

    if (areCoPrime(a, b)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}