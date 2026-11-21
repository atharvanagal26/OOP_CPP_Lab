#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long maxSubarraySum(const vector<long long>& arr) {
    long long maxSoFar = arr[0];
    long long currMax = arr[0];
    for (size_t i = 1; i < arr.size(); ++i) {
        currMax = max(arr[i], currMax + arr[i]);
        maxSoFar = max(maxSoFar, currMax);
    }
    return maxSoFar;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<long long> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Max Subarray Sum: " << maxSubarraySum(arr) << "\n";
    return 0;
}