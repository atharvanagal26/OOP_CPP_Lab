#include <iostream>
using namespace std;
long long factorial(int n) {
    if (n < 0) return -1; 
    long long result = 1; 
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    if (!(cin >> n)) return 0;
    if (n < 0) {
        cout << "INVALID\n";
    } else if (n > 20) {
        cout << "OVERFLOW\n";
    } else {
        cout << factorial(n) << "\n";
    }
    return 0;
}