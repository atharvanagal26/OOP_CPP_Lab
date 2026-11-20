#include <iostream>
#include <string>
using namespace std;
bool isRotation(const string& s1, const string& s2) {
    if (s1.size() != s2.size()) return false;
    string doubled = s1 + s1;
    return doubled.find(s2) != string::npos;
}
int main() {
    string s1 = "ABCD", s2 = "CDAB";
    cout << (isRotation(s1, s2) ? "YES (Rotation)" : "NO") << "\n";
    return 0;
}