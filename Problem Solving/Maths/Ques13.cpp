#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n = 15; // 15 candies
    cout << (n % 3 == 0 ? "YES" : "NO") << "\n";
    return 0;
}
