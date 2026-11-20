#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void printFactors(long long n) {
    if (n == 0) {
        cout << "INF\n";
        return;
    }

    long long val = llabs(n);
    vector<long long> small_factors, large_factors;

    for (long long i = 1; i * i <= val; ++i) {
        if (val % i == 0) {
            small_factors.push_back(i);
            long long pair_factor = val / i;
            if (pair_factor != i) {
                large_factors.push_back(pair_factor);
            }
        }
    }

    // Print smaller factors in ascending order
    for (size_t i = 0; i < small_factors.size(); ++i) {
        if (i > 0) cout << ' ';
        cout << small_factors[i];
    }

    // Print paired larger factors in ascending order (reverse of discovery)
    for (size_t i = large_factors.size(); i > 0; --i) {
        cout << ' ' << large_factors[i - 1];
    }
    cout << '\n';
}

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if (!(cin >> n)) return 0;

    printFactors(n);

    return 0;
}