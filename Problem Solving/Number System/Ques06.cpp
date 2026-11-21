#include <iostream>
#include <string>
using namespace std;
bool isDuckNumber(const string& s) {
    if (s.empty() || s[0] == '0') return false;
    for (size_t i = 1; i < s.size(); ++i) {
        if (s[i] == '0') return true;
    }
    return false;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s = "4052";
    cout << (isDuckNumber(s) ? "Duck Number" : "Not a Duck Number") << "\n";
    return 0;
}