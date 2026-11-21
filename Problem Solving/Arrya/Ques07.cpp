#include <iostream>
#include <vector>
using namespace std;
void rotateClockwiseByOne(vector<long long>& arr) {
    int n = static_cast<int>(arr.size());
    if (n <= 1) return;
    long long last = arr[n - 1];
    for (int i = n - 1; i > 0; --i) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<long long> arr = {1, 2, 3, 4, 5};
    rotateClockwiseByOne(arr);
    for (long long x : arr) cout << x << " ";
    cout << "\n";
    return 0;
}