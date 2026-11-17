#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t; 
    while (t--) {
        int x, n;
        cin >> x >> n; 
        cout << (x / 10) * n << "\n";
    }
    return 0;
} 