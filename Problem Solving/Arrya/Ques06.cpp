#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int doUnionCount(const vector<long long>& a, const vector<long long>& b) {
    unordered_set<long long> s;
    s.reserve(a.size() + b.size());
    for (long long x : a) s.insert(x);
    for (long long x : b) s.insert(x);
    return static_cast<int>(s.size());
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<long long> a = {1, 2, 3, 4, 5};
    vector<long long> b = {1, 2, 3, 6, 7};
    cout << "Union Count: " << doUnionCount(a, b) << "\n";
    return 0;
}