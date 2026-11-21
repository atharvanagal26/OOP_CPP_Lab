#include <iostream>
#include <cstdlib>
using namespace std;
long long computeLCM(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
    return (llabs(a) / __gcd(llabs(a), llabs(b))) * llabs(b);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a = 12, b = 18;
    cout << computeLCM(a, b) << "\n";
    return 0;
}