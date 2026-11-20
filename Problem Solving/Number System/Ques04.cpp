#include <iostream>
using namespace std;
bool isPrime(long long x) {
    if (x <= 1) return false;
    if (x == 2 || x == 3) return true;
    if (x % 2 == 0 || x % 3 == 0) return false;
    for (long long i = 5; i * i <= x; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}
void getDigitMetrics(long long n, int& digits, long long& place_val) {
    digits = 0;
    place_val = 1;
    long long temp = n;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    for (int i = 1; i < digits; i++) {
        place_val *= 10;
    }
}
bool isCircularPrime(long long n) {
    if (!isPrime(n)) return false;
    int digits = 0;
    long long place_val = 1;
    getDigitMetrics(n, digits, place_val);
    long long current = n;
    for (int i = 1; i < digits; i++) {
        long long rem = current % place_val;      
        long long lead = current / place_val;    
        current = rem * 10 + lead;
        if (!isPrime(current)) {
            return false;
        }
    }
    return true;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    if (!(cin >> n)) return 0;
    if (isCircularPrime(n)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}