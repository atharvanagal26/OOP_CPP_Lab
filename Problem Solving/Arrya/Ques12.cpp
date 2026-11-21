#include <iostream>
#include <vector>
#include <utility>
using namespace std;
int nextGap(int gap) {
    if (gap <= 1) return 0;
    return (gap / 2) + (gap % 2);
}
void mergeInPlace(vector<long long>& arr1, vector<long long>& arr2) {
    int n = static_cast<int>(arr1.size());
    int m = static_cast<int>(arr2.size());
    int gap = nextGap(n + m);
    while (gap > 0) {
        int i = 0, j = gap;
        while (j < n + m) {
            long long& first = (i < n) ? arr1[i] : arr2[i - n];
            long long& second = (j < n) ? arr1[j] : arr2[j - n];
            if (first > second) swap(first, second);
            i++;
            j++;
        }
        gap = nextGap(gap);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<long long> arr1 = {1, 3, 5, 7};
    vector<long long> arr2 = {0, 2, 6, 8, 9};
    mergeInPlace(arr1, arr2);
    for (long long x : arr1) cout << x << " ";
    for (long long x : arr2) cout << x << " ";
    cout << "\n";
    return 0;
}