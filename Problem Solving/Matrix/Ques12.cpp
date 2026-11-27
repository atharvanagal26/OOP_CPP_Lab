#include <iostream>
#include <vector>
using namespace std;
struct Triplet {
    int row, col;
    long long val;
};
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<long long>> mat = {
        {0, 0, 3, 0},
        {0, 0, 5, 7},
        {0, 0, 0, 0},
        {0, 2, 6, 0}
    };
    int r = static_cast<int>(mat.size()), c = static_cast<int>(mat[0].size());
    int zeroCount = 0;
    vector<Triplet> sparse;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (mat[i][j] == 0) zeroCount++;
            else sparse.push_back({i, j, mat[i][j]});
        }
    }
    if (zeroCount > (r * c) / 2) {
        cout << "Sparse Matrix (Row, Col, Val):\n";
        for (const auto& t : sparse) {
            cout << "(" << t.row << ", " << t.col << ", " << t.val << ")\n";
        }
    } else {
        cout << "Not a Sparse Matrix\n";
    }
    return 0;
}