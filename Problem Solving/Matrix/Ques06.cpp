#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
int largestHistogramArea(const vector<int>& heights) {
    int m = static_cast<int>(heights.size());
    stack<int> st;
    int maxArea = 0;
    for (int i = 0; i <= m; ++i) {
        int currH = (i == m) ? 0 : heights[i];
        while (!st.empty() && currH < heights[st.top()]) {
            int h = heights[st.top()];
            st.pop();
            int w = st.empty() ? i : (i - st.top() - 1);
            maxArea = max(maxArea, h * w);
        }
        st.push(i);
    }
    return maxArea;
}
int maxRectangleArea(const vector<vector<int>>& M) {
    if (M.empty() || M[0].empty()) return 0;
    int n = static_cast<int>(M.size()), m = static_cast<int>(M[0].size());
    vector<int> heights(m, 0);
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            heights[j] = (M[i][j] == 0) ? 0 : heights[j] + 1;
        }
        ans = max(ans, largestHistogramArea(heights));
    }
    return ans;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int>> M = {
        {0, 1, 1, 0},
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {1, 1, 0, 0}
    };
    cout << "Max Rectangle Area: " << maxRectangleArea(M) << "\n";
    return 0;
}