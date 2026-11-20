#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void printUniquePermutations(string s) {
    sort(s.begin(), s.end());
    do {
        cout << s << " ";
    } while (next_permutation(s.begin(), s.end()));
    cout << "\n";
}
int main() {
    printUniquePermutations("AAB");
    return 0;
}