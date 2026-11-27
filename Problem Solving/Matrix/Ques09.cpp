#include <iostream>
#include <vector>
using namespace std;
int countLessEqual(const vector<vector<long long>>& mat, long long mid) {
    int n = static_cast<int>(mat.size());
    int row = n - 1, col = 0, count = 0;
    while (row >= 0 && col < n) {
        if (mat[row][col] <= mid) {
            count += (row + 1);
            col++;
        } else {
            row--;
        }
    }
    return count;
}
long long kthSmallestInMatrix(const vector<vector<long long>>& mat, int k) {
    int n = static_cast<int>(mat.size());
    long long low = mat[0][0], high = mat[n - 1][n - 1];
    while (low < high) {
        long long mid = low + (high - low) / 2;
        if (countLessEqual(mat, mid) < k) low = mid + 1;
        else high = mid;
    }
    return low;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<long long>> mat = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {24, 29, 37, 48},
        {32, 33, 39, 50}
    };
    cout << "7th Smallest Element: " << kthSmallestInMatrix(mat, 7) << "\n";
    return 0;
}