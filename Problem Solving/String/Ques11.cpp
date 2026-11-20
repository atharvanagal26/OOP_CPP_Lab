#include <iostream>
#include <string>
using namespace std;
int maxBalancedSubstrings(const string& str) {
    int zeros = 0, ones = 0, count = 0;
    for (char c : str) {
        if (c == '0') zeros++;
        else ones++;
        if (zeros == ones) count++;
    }
    return (zeros == ones && count > 0) ? count : -1;
}
int main() {
    string str = "0100110101";
    cout << "Max Substrings: " << maxBalancedSubstrings(str) << "\n";
    return 0;
}