#include <iostream>
#include <vector>
using namespace std;
long long sumOfSquares(long long n) {
    long long total = 0;
    while (n > 0) {
        long long d = n % 10;
        total += d * d;
        n /= 10;
    }
    return total;
}
bool isHappy(long long n) {
    if (n <= 0) return false;
    long long slow = n, fast = n;
    do {
        slow = sumOfSquares(slow);
        fast = sumOfSquares(sumOfSquares(fast));
    } while (slow != fast);
    return slow == 1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<long long> inputs = {19, 20, 7, 4, 28};
    bool first = true;
    for (long long x : inputs) {
        if (isHappy(x)) {
            if (!first) cout << ' ';
            cout << x;
            first = false;
        }
    }
    cout << "\n";
    return 0;
}