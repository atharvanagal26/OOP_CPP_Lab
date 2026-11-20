#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long x = 100, n = 7; // 100 total points, 7 test cases passed
    long long score = (x / 10) * n;
    cout << score << "\n";
    return 0;
}