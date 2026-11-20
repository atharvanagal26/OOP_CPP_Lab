#include <iostream>
#include <numeric> // Required for std::lcm and std::gcd in C++17/C++20
using namespace std;

long long computeLCM(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
    // Divide first to minimize intermediate multiplication overflow
    return (llabs(a) / std::gcd(llabs(a), llabs(b))) * llabs(b);
}

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b;
    if (!(cin >> a >> b)) return 0;

    cout << computeLCM(a, b) << "\n";

    return 0;
}