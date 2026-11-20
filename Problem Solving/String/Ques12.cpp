#include <iostream>
#include <vector>
#include <climits>
using namespace std;
long long solveWordWrap(const vector<int>& nums, int k) {
    int n = static_cast<int>(nums.size());
    vector<long long> dp(n + 1, LLONG_MAX);
    dp[n] = 0;
    for (int i = n - 1; i >= 0; --i) {
        int currLen = -1;
        for (int j = i; j < n; ++j) {
            currLen += nums[j] + 1;
            if (currLen > k) break;
            long long cost = (j == n - 1) ? 0 : 1LL * (k - currLen) * (k - currLen) * (k - currLen);
            if (dp[j + 1] != LLONG_MAX && cost + dp[j + 1] < dp[i]) {
                dp[i] = cost + dp[j + 1];
            }
        }
    }
    return dp[0];
}
int main() {
    vector<int> nums = {3, 2, 2, 5};
    int k = 6;
    cout << "Minimum Cost: " << solveWordWrap(nums, k) << "\n";
    return 0;
}