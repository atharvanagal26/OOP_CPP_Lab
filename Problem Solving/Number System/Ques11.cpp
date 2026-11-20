#include <iostream>
#include <numeric> // Required for std::gcd in C++17/C++20
#include <vector>
using namespace std;

long long arrayGCD(const vector<long long>& nums) {
    long long current_gcd = 0; // gcd(0, x) == |x|, safe identity for folding
    for (long long val : nums) {
        current_gcd = std::gcd(current_gcd, val);
    }
    return current_gcd;
}

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; // Number of integers (n >= 2)
    if (!(cin >> n) || n <= 0) return 0;

    vector<long long> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    cout << arrayGCD(nums) << "\n";

    return 0;
}