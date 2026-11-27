#include <iostream>
#include <vector>
using namespace std;
int rowWithMax1s(const vector<vector<int>>& arr) {
    int n = static_cast<int>(arr.size());
    int m = static_cast<int>(arr[0].size());
    int maxRowIdx = -1;
    int col = m - 1;
    for (int row = 0; row < n; ++row) {
        while (col >= 0 && arr[row][col] == 1) {
            col--;
            maxRowIdx = row;
        }
    }
    return maxRowIdx;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int>> arr = {
        {0, 1, 1, 1},
        {0, 0, 1, 1},
        {1, 1, 1, 1},
        {0, 0, 0, 0}
    };
    cout << "Max 1s Row Index: " << rowWithMax1s(arr) << "\n";
    return 0;
}