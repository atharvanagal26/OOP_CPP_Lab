#include <iostream>
#include <numeric> 
#include <vector>
using namespace std;
long long arrayGCD(const vector<long long>& nums) {
    long long current_gcd = 0; 
    for (long long val : nums) {
        current_gcd = std::gcd(current_gcd, val);
    }
    return current_gcd;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; 
    if (!(cin >> n) || n <= 0) return 0;
    vector<long long> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cout << arrayGCD(nums) << "\n";
    return 0;
}