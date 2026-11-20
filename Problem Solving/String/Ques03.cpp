#include <iostream>
#include <string>
#include <vector>
using namespace std;
void printDuplicates(const string& s) {
    vector<int> freq(256, 0);
    for (unsigned char c : s) freq[c]++;
    for (int i = 0; i < 256; ++i) {
        if (freq[i] > 1) {
            cout << static_cast<char>(i) << " -> count = " << freq[i] << "\n";
        }
    }
}
int main() {
    string s = "programming";
    printDuplicates(s);
    return 0;
}
