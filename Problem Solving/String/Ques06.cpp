#include <iostream>
#include <string>
using namespace std;
bool isValidShuffle(const string& s1, const string& s2, const string& res) {
    if (s1.size() + s2.size() != res.size()) return false;
    size_t i = 0, j = 0, k = 0;
    while (k < res.size()) {
        if (i < s1.size() && s1[i] == res[k]) i++;
        else if (j < s2.size() && s2[j] == res[k]) j++;
        else return false;
        k++;
    }
    return (i == s1.size() && j == s2.size());
}
int main() {
    cout << (isValidShuffle("XY", "12", "X1Y2") ? "Valid Shuffle" : "Invalid Shuffle") << "\n";
    return 0;
}