#include <iostream>
#include <string>
using namespace std;
string countAndSay(int n) {
    string curr = "1";
    for (int step = 2; step <= n; ++step) {
        string next = "";
        int i = 0, len = static_cast<int>(curr.size());
        while (i < len) {
            int count = 1;
            while (i + 1 < len && curr[i] == curr[i + 1]) {
                count++;
                i++;
            }
            next += to_string(count) + curr[i];
            i++;
        }
        curr = next;
    }
    return curr;
}
int main() {
    int n = 5;
    cout << "Term " << n << ": " << countAndSay(n) << "\n";
    return 0;
}