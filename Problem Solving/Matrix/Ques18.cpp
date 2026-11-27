#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
void luDecomposition(const vector<vector<double>>& A) {
    int n = static_cast<int>(A.size());
    vector<vector<double>> L(n, vector<double>(n, 0.0));
    vector<vector<double>> U(n, vector<double>(n, 0.0));
    for (int i = 0; i < n; ++i) {
        for (int k = i; k < n; ++k) {
            double sum = 0.0;
            for (int j = 0; j < i; ++j) sum += L[i][j] * U[j][k];
            U[i][k] = A[i][k] - sum;
        }
        for (int k = i; k < n; ++k) {
            if (i == k) L[i][i] = 1.0;
            else {
                double sum = 0.0;
                for (int j = 0; j < i; ++j) sum += L[k][j] * U[j][i];
                L[k][i] = (A[k][i] - sum) / U[i][i];
            }
        }
    }
    cout << "Lower Triangular (L):\n";
    for (const auto& row : L) {
        for (double x : row) cout << setw(6) << x << " ";
        cout << "\n";
    }
    cout << "Upper Triangular (U):\n";
    for (const auto& row : U) {
        for (double x : row) cout << setw(6) << x << " ";
        cout << "\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<double>> A = {
        {2, -1, -2},
        {-4, 6, 3},
        {-4, -2, 8}
    };
    luDecomposition(A);
    return 0;
}