#include <iostream>
#include <vector>
#include <utility>
using namespace std;
void sort012(vector<int>& arr) {
    int low = 0, mid = 0, high = static_cast<int>(arr.size()) - 1;
    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low++], arr[mid++]);
        } else if (arr[mid] == 1) {
            mid++;
        } else {
            swap(arr[mid], arr[high--]);
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> arr = {0, 2, 1, 2, 0, 1, 0};
    sort012(arr);
    for (int x : arr) cout << x << " ";
    cout << "\n";
    return 0;
}