#include <iostream>
#include <vector>
using namespace std;
vector<long long> spiralOrder(const vector<vector<long long>>& mat) {
    vector<long long> res;
    if (mat.empty() || mat[0].empty()) return res;
    int top = 0, bottom = static_cast<int>(mat.size()) - 1;
    int left = 0, right = static_cast<int>(mat[0].size()) - 1;
    while (top <= bottom && left <= right) {
        for (int j = left; j <= right; ++j) res.push_back(mat[top][j]);
        top++;
        for (int i = top; i <= bottom; ++i) res.push_back(mat[i][right]);
        right--;
        if (top <= bottom) {
            for (int j = right; j >= left; --j) res.push_back(mat[bottom][j]);
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; --i) res.push_back(mat[i][left]);
            left++;
        }
    }
    return res;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<long long>> mat = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12}
    };
    for (long long x : spiralOrder(mat)) cout << x << " ";
    cout << "\n";
    return 0;
}