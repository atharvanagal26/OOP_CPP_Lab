#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<vector<long long>> multiplyMatrices(
    const vector<vector<long long>>& A,
    const vector<vector<long long>>& B) {
    int r1 = static_cast<int>(A.size()), c1 = static_cast<int>(A[0].size());
    int c2 = static_cast<int>(B[0].size());
    vector<vector<long long>> C(r1, vector<long long>(c2, 0));
    for (int i = 0; i < r1; ++i)
        for (int k = 0; k < c1; ++k)
            for (int j = 0; j < c2; ++j)
                C[i][j] += A[i][k] * B[k][j];
    return C;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<long long>> key = {
        {2, 3},
        {1, 4}
    };
    string msg = "CODE";
    vector<vector<long long>> msgMat(2, vector<long long>(2));
    int idx = 0;
    for (int col = 0; col < 2; ++col) {
        for (int row = 0; row < 2; ++row) {
            msgMat[row][col] = (msg[idx] == ' ') ? 0 : (msg[idx] - 'A' + 1);
            idx++;
        }
    }
    vector<vector<long long>> encoded = multiplyMatrices(key, msgMat);
    cout << "Encoded Matrix Stream: ";
    for (int col = 0; col < 2; ++col)
        for (int row = 0; row < 2; ++row)
            cout << encoded[row][col] << " ";
    cout << "\n";
    return 0;
}