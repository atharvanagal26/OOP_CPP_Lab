#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n = 100, a = 20, b = 30;
    long long rated_users = n - a;
    long long above_1000 = n - a - b;
    cout << rated_users << " " << above_1000 << "\n";
    return 0;
}