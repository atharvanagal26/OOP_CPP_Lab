#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long x = 1000, y = 100;
    long long total_prize = 10LL * x + 90LL * y;
    cout << total_prize << "\n";
    return 0;
}
