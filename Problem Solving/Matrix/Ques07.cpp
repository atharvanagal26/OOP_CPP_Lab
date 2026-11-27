#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
long long findMaxValue(const vector<vector<long long>>& mat) {
    int n = static_cast<int>(mat.size());
    vector<vector<long long>> maxArr(n, vector<long long>(n));
    maxArr[n - 1][n - 1] = mat[n - 1][n - 1];
    long long maxVal = mat[n - 1][n - 1];
    for (int j = n - 2; j >= 0; --j) {
        maxVal = max(maxVal, mat[n - 1][j]);
        maxArr[n - 1][j] = maxVal;
    }
    maxVal = mat[n - 1][n - 1];
    for (int i = n - 2; i >= 0; --i) {
        maxVal = max(maxVal, mat[i][n - 1]);
        maxArr[i][n - 1] = maxVal;
    }
    long long ans = LLONG_MIN;
    for (int i = n - 2; i >= 0; --i) {
        for (int j = n - 2; j >= 0; --j) {
            ans = max(ans, maxArr[i + 1][j + 1] - mat[i][j]);
            maxArr[i][j] = max({mat[i][j], maxArr[i + 1][j], maxArr[i][j + 1]});
        }
    }
    return ans;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<long long>> mat = {
        { 1,  2, -1, -4, -20},
        {-8, -3,  4,  2,   1},
        { 3,  8,  6,  1,   3},
        {-4, -1,  1,  7,  -6},
        { 0, -4, 10, -5,   1}
    };
    cout << "Maximum Difference: " << findMaxValue(mat) << "\n";
    return 0;
}