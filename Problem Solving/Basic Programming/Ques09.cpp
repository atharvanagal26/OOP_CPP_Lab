#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t; 
    while (t--) {
        int x;
        cin >> x; 
        cout << (10 * x) << "\n";
    }
    return 0;
}