#include <iostream>
#include <vector>
#include <utility>
using namespace std;
void reverseString(vector<char>& s) {
    int left = 0, right = static_cast<int>(s.size()) - 1;
    while (left < right) {
        swap(s[left++], s[right--]);
    }
}
int main() {
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    reverseString(s);
    for (char c : s) cout << c;
    cout << "\n";
    return 0;
}