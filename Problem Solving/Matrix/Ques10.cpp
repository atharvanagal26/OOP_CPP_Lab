#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<long long> findCommonElements(const vector<vector<long long>>& mat) {
    int m = static_cast<int>(mat.size());
    int n = static_cast<int>(mat[0].size());
    unordered_map<long long, int> rowTracker;
    for (int j = 0; j < n; ++j) {
        rowTracker[mat[0][j]] = 1;
    }
    vector<long long> res;
    for (int i = 1; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            long long val = mat[i][j];
            if (rowTracker[val] == i) {
                rowTracker[val] = i + 1;
                if (i == m - 1) res.push_back(val);
            }
        }
    }
    if (m == 1) {
        for (const auto& kv : rowTracker) res.push_back(kv.first);
    }
    return res;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<long long>> mat = {
        {1, 2, 1, 4, 8},
        {3, 7, 8, 5, 1},
        {8, 7, 7, 3, 1},
        {8, 1, 2, 7, 9}
    };
    for (long long x : findCommonElements(mat)) cout << x << " ";
    cout << "\n";
    return 0;
}