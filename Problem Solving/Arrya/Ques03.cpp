#include <iostream>
#include <vector>
#include <utility>
using namespace std;
int partition(vector<long long>& arr, int l, int r) {
    long long pivot = arr[r];
    int i = l;
    for (int j = l; j < r; ++j) {
        if (arr[j] <= pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[r]);
    return i;
}
long long kthSmallest(vector<long long>& arr, int l, int r, int k) {
    int targetIdx = l + k - 1;
    while (l <= r) {
        int pivotIdx = partition(arr, l, r);
        if (pivotIdx == targetIdx) return arr[pivotIdx];
        else if (pivotIdx > targetIdx) r = pivotIdx - 1;
        else l = pivotIdx + 1;
    }
    return -1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<long long> arr = {7, 10, 4, 3, 20, 15};
    int k = 3;
    cout << k << "rd smallest element: " << kthSmallest(arr, 0, static_cast<int>(arr.size()) - 1, k) << "\n";
    return 0;
}