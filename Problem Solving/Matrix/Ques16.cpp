#include <iostream>
#include <vector>
using namespace std;
void printUpperTriangular(const vector<vector<long long>>& mat) {
    int n = static_cast<int>(mat.size());
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << (i > j ? 0 : mat[i][j]) << " ";
        }
        cout << "\n";
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
    printUpperTriangular(mat);
    return 0;
}