#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a = 4, b = 7; // 4 patties, 7 buns
    cout << min(a, b) << "\n";
    return 0;
}