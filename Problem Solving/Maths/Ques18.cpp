#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long x = 250; // Each ticket costs 250
    cout << (4LL * x <= 1000 ? "YES" : "NO") << "\n";
    return 0;
}
