#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<long long>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int n = static_cast<int>(mat.size());
    long long trace = 0;
    long long sumSq = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j) trace += mat[i][j];
            sumSq += mat[i][j] * mat[i][j];
        }
    }
    double normal = sqrt(static_cast<double>(sumSq));
    cout << "Trace: " << trace << "\n";
    cout << fixed << setprecision(4) << "Normal: " << normal << "\n";
    return 0;
}