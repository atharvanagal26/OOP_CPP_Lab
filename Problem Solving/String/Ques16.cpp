#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;
bool wordBreak(const string& A, const vector<string>& B) {
    unordered_set<string> dict(B.begin(), B.end());
    int n = static_cast<int>(A.size());
    vector<bool> dp(n + 1, false);
    dp[0] = true;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (dp[j] && dict.count(A.substr(j, i - j))) {
                dp[i] = true;
                break;
            }
        }
    }
    return dp[n];
}
int main() {
    vector<string> B = {"i", "like", "sam", "sung", "samsung", "mobile"};
    cout << (wordBreak("ilikesamsung", B) ? "YES" : "NO") << "\n";
    return 0;
}