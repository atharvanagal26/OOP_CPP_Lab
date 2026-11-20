#include <iostream>
#include <string>
using namespace std;
void printSubsequences(const string& s) {
    int n = static_cast<int>(s.size());
    int total = 1 << n;
    for (int mask = 1; mask < total; ++mask) {
        string sub = "";
        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i)) sub += s[i];
        }
        cout << sub << " ";
    }
    cout << "\n";
}
int main() {
    printSubsequences("abc");
    return 0;
}