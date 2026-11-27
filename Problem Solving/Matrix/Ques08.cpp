#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void rotate90Clockwise(vector<vector<long long>>& mat) {
    int n = static_cast<int>(mat.size());
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            swap(mat[i][j], mat[j][i]);
        }
    }
    for (int i = 0; i < n; ++i) {
        reverse(mat[i].begin(), mat[i].end());
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<long long>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    rotate90Clockwise(mat);
    for (const auto& row : mat) {
        for (long long x : row) cout << x << " ";
        cout << "\n";
    }
    return 0;
}