#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    if (!(cin >> n)) return 0;
    if (n < 0) {
        cout << "NO\n";
        return 0;
    }
    __int128 sq = static_cast<__int128>(n) * n;
    __int128 mod = 10;
    long long temp = n / 10;
    while (temp > 0) {
        mod *= 10;
        temp /= 10;
    }
    if (sq % mod == static_cast<__int128>(n)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}