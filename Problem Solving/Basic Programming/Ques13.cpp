#include <iostream>
#include <algorithm> 
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t; 
    while (t--) {
        int n, m;
        cin >> n >> m; 
        if (n > m) {
            cout << (n - m) << "\n";
        } else {
            cout << 0 << "\n";
        }
    }
    return 0;
}