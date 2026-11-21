#include <iostream>
#include <climits>
using namespace std;
void printFibonacciInValueRange(long long low, long long high) {
    if (low > high || high < 0) {
        cout << "\n";
        return;
    }
    long long a = 0; // F(0)
    long long b = 1; // F(1)
    bool first_printed = false;
    while (a <= high) {
        if (a >= low) {
            if (first_printed) cout << ' ';
            cout << a;
            first_printed = true;
        }
        if (b > LLONG_MAX - a) {
            break;
        }
        long long next = a + b;
        a = b;
        b = next;
    }
    cout << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long low, high;
    if (!(cin >> low >> high)) return 0;
    printFibonacciInValueRange(low, high);
    return 0;
}