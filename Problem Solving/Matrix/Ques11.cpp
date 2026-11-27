#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool isInvertible(vector<vector<double>> mat) {
    int n = static_cast<int>(mat.size());
    if (n == 0) return false;
    for (const auto& row : mat) {
        if (static_cast<int>(row.size()) != n) return false;
    }
    const double EPS = 1e-9;
    for (int col = 0; col < n; ++col) {
        int pivot = col;
        for (int row = col + 1; row < n; ++row) {
            if (fabs(mat[row][col]) > fabs(mat[pivot][col])) pivot = row;
        }
        if (fabs(mat[pivot][col]) < EPS) return false; // Singular (det == 0)
        swap(mat[col], mat[pivot]);

        for (int row = col + 1; row < n; ++row) {
            double factor = mat[row][col] / mat[col][col];
            for (int j = col; j < n; ++j) {
                mat[row][j] -= factor * mat[col][j];
            }
        }
    }
    return true;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<double>> mat = {
        {4, 7},
        {2, 6}
    };
    cout << (isInvertible(mat) ? "Invertible" : "Not Invertible") << "\n";
    return 0;
}