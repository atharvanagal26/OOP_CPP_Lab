#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t; 
    while (t--) {
        int x, y, a;
        cin >> x >> y >> a; 
        if (a >= x && a < y) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}