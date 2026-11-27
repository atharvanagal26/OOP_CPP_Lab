#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void sortMatrix(vector<vector<long long>>& mat) {
    int n = static_cast<int>(mat.size());
    vector<long long> flat;
    flat.reserve(n * n);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            flat.push_back(mat[i][j]);
    sort(flat.begin(), flat.end());
    int idx = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            mat[i][j] = flat[idx++];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<long long>> mat = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };
    sortMatrix(mat);
    for (const auto& row : mat) {
        for (long long x : row) cout << x << " ";
        cout << "\n";
    }
    return 0;
}