#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long matrixMedian(const vector<vector<long long>>& mat) {
    int r = static_cast<int>(mat.size());
    int c = static_cast<int>(mat[0].size());
    long long low = mat[0][0], high = mat[0][c - 1];
    for (int i = 1; i < r; ++i) {
        low = min(low, mat[i][0]);
        high = max(high, mat[i][c - 1]);
    }
    int desired = (r * c + 1) / 2;
    while (low < high) {
        long long mid = low + (high - low) / 2;
        int count = 0;
        for (int i = 0; i < r; ++i) {
            count += static_cast<int>(upper_bound(mat[i].begin(), mat[i].end(), mid) - mat[i].begin());
        }
        if (count < desired) low = mid + 1;
        else high = mid;
    }
    return low;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<long long>> mat = {
        {1, 3, 5},
        {2, 6, 9},
        {3, 6, 9}
    };
    cout << "Median: " << matrixMedian(mat) << "\n";
    return 0;
}