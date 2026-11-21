#include <iostream>
#include <vector>
#include <utility>
using namespace std;
pair<long long, long long> findMinMax(const vector<long long>& arr) {
    int n = static_cast<int>(arr.size());
    long long mn, mx;
    int i;
    if (n % 2 == 0) {
        if (arr[0] < arr[1]) {
            mn = arr[0]; mx = arr[1];
        } else {
            mn = arr[1]; mx = arr[0];
        }
        i = 2;
    } else {
        mn = mx = arr[0];
        i = 1;
    }
    while (i < n - 1) {
        if (arr[i] < arr[i + 1]) {
            if (arr[i] < mn) mn = arr[i];
            if (arr[i + 1] > mx) mx = arr[i + 1];
        } else {
            if (arr[i + 1] < mn) mn = arr[i + 1];
            if (arr[i] > mx) mx = arr[i];
        }
        i += 2;
    }
    return {mn, mx};
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<long long> arr = {1000, 11, 445, 1, 330, 3000};
    auto [mn, mx] = findMinMax(arr);
    cout << "Minimum: " << mn << ", Maximum: " << mx << "\n";
    return 0;
}