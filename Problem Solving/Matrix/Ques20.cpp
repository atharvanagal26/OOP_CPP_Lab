#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<long long>> mat = {
        {1, 2, 3},
        {4, 5, 6}
    };
    long long sum = 0;
    long long product = 1;
    for (const auto& row : mat) {
        for (long long val : row) {
            sum += val;
            product *= val;
        }
    }
    cout << "Sum: " << sum << "\n";
    cout << "Product: " << product << "\n";
    return 0;
}