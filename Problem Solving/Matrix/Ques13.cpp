#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void printMaxSquareSubmatrix(const vector<vector<int>>& mat) {
    int r = static_cast<int>(mat.size()), c = static_cast<int>(mat[0].size());
    vector<vector<int>> dp(r, vector<int>(c, 0));
    int maxSide = 0, maxI = 0, maxJ = 0;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (i == 0 || j == 0) dp[i][j] = mat[i][j];
            else if (mat[i][j] == 1)
                dp[i][j] = 1 + min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]});
            if (dp[i][j] > maxSide) {
                maxSide = dp[i][j];
                maxI = i;
                maxJ = j;
            }
        }
    }
    cout << "Max Square Size: " << maxSide << "x" << maxSide << "\n";
    for (int i = maxI - maxSide + 1; i <= maxI; ++i) {
        for (int j = maxJ - maxSide + 1; j <= maxJ; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int>> mat = {
        {0, 1, 1, 0, 1},
        {1, 1, 0, 1, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 0},
        {1, 1, 1, 1, 1}
    };
    printMaxSquareSubmatrix(mat);
    return 0;
}