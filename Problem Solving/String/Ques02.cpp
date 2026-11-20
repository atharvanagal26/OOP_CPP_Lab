#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(const string& s) {
    int left = 0, right = static_cast<int>(s.size()) - 1;
    while (left < right) {
        if (s[left++] != s[right--]) return false;
    }
    return true;
}
int main() {
    string s = "racecar";
    cout << (isPalindrome(s) ? "Palindrome" : "Not Palindrome") << "\n";
    return 0;
}