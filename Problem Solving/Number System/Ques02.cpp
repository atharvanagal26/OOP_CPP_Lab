#include <iostream>
using namespace std;
bool isAutomorphic(long long n) {
    if (n < 0) return false;
    __int128 sq = static_cast<__int128>(n) * n;
    long long temp = n;
    if (n == 0) return true;
    while (temp > 0) {
        if (temp % 10 != static_cast<long long>(sq % 10)) {
            return false;
        }
        temp /= 10;
        sq /= 10;
    }
    return true;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n = 76; // 76^2 = 5776
    cout << (isAutomorphic(n) ? "Automorphic Number" : "Not an Automorphic Number") << "\n";
    return 0;
}