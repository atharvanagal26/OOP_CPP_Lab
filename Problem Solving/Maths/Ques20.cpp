#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long x = 35, y = 20; // 35 students, 20 existing chairs
    cout << max(0LL, x - y) << "\n";
    return 0;
}
