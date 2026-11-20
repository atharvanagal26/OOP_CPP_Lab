#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n = 50, m = 35; // 50 students, 35 tickets
    cout << max(0LL, n - m) << "\n";
    return 0;
}