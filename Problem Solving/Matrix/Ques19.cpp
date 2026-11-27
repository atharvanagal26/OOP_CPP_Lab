#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
double determinant(vector<vector<double>> mat) {
    int n = static_cast<int>(mat.size());
    double det = 1.0;
    const double EPS = 1e-9;
    for (int col = 0; col < n; ++col) {
        int pivot = col;
        for (int row = col + 1; row < n; ++row) {
            if (fabs(mat[row][col]) > fabs(mat[pivot][col])) pivot = row;
        }
        if (fabs(mat[pivot][col]) < EPS) return 0.0;
        if (pivot != col) {
            swap(mat[col], mat[pivot]);
            det = -det;
        }
        det *= mat[col][col];
        for (int row = col + 1; row < n; ++row) {
            double factor = mat[row][col] / mat[col][col];
            for (int j = col + 1; j < n; ++j) {
                mat[row][j] -= factor * mat[col][j];
            }
        }
    }
    return det;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<double>> mat = {
        {6, 1, 1},
        {4, -2, 5},
        {2, 8, 7}
    };
    cout << "Determinant: " << determinant(mat) << "\n";
    return 0;
}