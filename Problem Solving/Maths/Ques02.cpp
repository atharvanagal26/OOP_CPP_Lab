#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long x = 3; // Office is 3 km away
    long long weekly_km = 2LL * x * 5;
    cout << weekly_km << "\n";
    return 0;
}