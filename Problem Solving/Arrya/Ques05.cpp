#include <iostream>
#include <vector>
#include <utility>
using namespace std;
void rearrangeNegatives(vector<long long>& arr) {
    int j = 0;
    for (int i = 0; i < static_cast<int>(arr.size()); ++i) {
        if (arr[i] < 0) {
            if (i != j) swap(arr[i], arr[j]);
            j++;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<long long> arr = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    rearrangeNegatives(arr);
    for (long long x : arr) cout << x << " ";
    cout << "\n";
    return 0;
}