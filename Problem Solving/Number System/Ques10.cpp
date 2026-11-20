#include <iostream>
using namespace std;

void printFloydTriangle(int n) {
    if (n <= 0) return;

    long long current = 1; // Continuous counter across all rows

    for (int row = 1; row <= n; ++row) {
        for (int col = 1; col <= row; ++col) {
            if (col > 1) cout << ' ';
            cout << current++;
        }
        cout << '\n';
    }
}

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    printFloydTriangle(n);

    return 0;
}