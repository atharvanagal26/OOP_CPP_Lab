#include <iostream>
#include <cstdlib> 
using namespace std;
bool isBuzzNumber(long long n) {
    long long val = llabs(n);
    return (val % 7 == 0) || (val % 10 == 7);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    if (!(cin >> n)) return 0;
    if (isBuzzNumber(n)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
} 