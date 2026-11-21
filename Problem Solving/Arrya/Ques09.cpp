#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long getMinDiff(vector<long long>& arr, long long k) {
    int n = static_cast<int>(arr.size());
    if (n <= 1) return 0;
    sort(arr.begin(), arr.end());
    long long ans = arr[n - 1] - arr[0];
    long long smallest = arr[0] + k;
    long long largest = arr[n - 1] - k;
    for (int i = 0; i < n - 1; ++i) {
        long long minH = min(smallest, arr[i + 1] - k);
        long long maxH = max(largest, arr[i] + k);
        if (minH < 0) continue; // Resulting height cannot be negative
        ans = min(ans, maxH - minH);
    }
    return ans;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<long long> arr = {1, 5, 8, 10};
    long long k = 2;
    cout << "Minimum Height Difference: " << getMinDiff(arr, k) << "\n";
    return 0;
}