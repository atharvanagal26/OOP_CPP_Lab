#include <iostream>
#include <vector>
using namespace std;
long long kadaneWithIndices(const vector<long long>& arr, int& bestStart, int& bestEnd) {
    long long maxSum = arr[0], currSum = arr[0];
    bestStart = 0; bestEnd = 0;
    int tempStart = 0;
    for (int i = 1; i < static_cast<int>(arr.size()); ++i) {
        if (arr[i] > currSum + arr[i]) {
            currSum = arr[i];
            tempStart = i;
        } else {
            currSum += arr[i];
        }
        if (currSum > maxSum) {
            maxSum = currSum;
            bestStart = tempStart;
            bestEnd = i;
        }
    }
    return maxSum;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<long long> arr = {1, 2, 3, -2, 5};
    int startIdx = 0, endIdx = 0;
    long long ans = kadaneWithIndices(arr, startIdx, endIdx);
    cout << "Max Sum: " << ans << " (Indices " << startIdx << " to " << endIdx << ")\n";
    return 0;
}