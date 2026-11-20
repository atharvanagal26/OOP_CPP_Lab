#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long x = 120; // Income is 120 (> 100)
    long long final_amount = (x > 100) ? (x - 10) : x;
    cout << final_amount << "\n";
    return 0;
}
