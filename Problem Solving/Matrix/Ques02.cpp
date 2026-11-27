#include <iostream>
#include <vector>
using namespace std;
bool searchMatrix(const vector<vector<long long>>& matrix, long long target) {
    int m = static_cast<int>(matrix.size());
    int n = static_cast<int>(matrix[0].size());
    int low = 0, high = m * n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        long long val = matrix[mid / n][mid % n];
        if (val == target) return true;
        else if (val < target) low = mid + 1;
        else high = mid - 1;
    }
    return false;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<long long>> matrix = {
        {1,  3,  5,  7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    cout << boolalpha << searchMatrix(matrix, 16) << "\n";
    return 0;
}