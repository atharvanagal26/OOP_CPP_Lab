#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals) {
    if (intervals.empty()) return {};
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> merged;
    merged.push_back(intervals[0]);
    for (size_t i = 1; i < intervals.size(); ++i) {
        if (intervals[i][0] <= merged.back()[1]) {
            merged.back()[1] = max(merged.back()[1], intervals[i][1]);
        } else {
            merged.push_back(intervals[i]);
        }
    }
    return merged;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> res = mergeIntervals(intervals);
    for (const auto& iv : res) {
        cout << "[" << iv[0] << ", " << iv[1] << "] ";
    }
    cout << "\n";
    return 0;
}