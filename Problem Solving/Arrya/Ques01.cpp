#include <iostream>
#include <vector>
#include <utility>
using namespace std;
void reverseArray(vector<long long>& arr) {
    int left = 0, right = static_cast<int>(arr.size()) - 1;
    while (left < right) {
        swap(arr[left++], arr[right--]);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<long long> arr = {1, 2, 3, 4, 5, 6};
    reverseArray(arr);
    for (long long x : arr) cout << x << " ";
    cout << "\n";
    return 0;
}