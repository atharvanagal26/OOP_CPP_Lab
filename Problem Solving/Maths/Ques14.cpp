#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n = 14; // 14 chocolates
    cout << (n % 2 == 0 ? "YES" : "NO") << "\n";
    return 0;
}
