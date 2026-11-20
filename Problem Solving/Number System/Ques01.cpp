#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
    long long x;
    if (!(cin >> x)) return 0;
    if (x < 0) {
        cout << "NO\n";
        return 0;
    }
    long long original = x;
    long long temp = x;
    int n = 0;
    if (x == 0) {
        n = 1;
    } else {
        while (temp > 0) {
            n++;
            temp /= 10;
        }
    }
    temp = x;
    long long sum = 0;
    while (temp > 0) {
        long long digit = temp % 10;
        sum += round(pow(digit, n));
        temp /= 10;
    }
    if (sum == original) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}