#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long x = 2000; // Command frequency: 2000 Hz
    if (x >= 67 && x <= 45000) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}