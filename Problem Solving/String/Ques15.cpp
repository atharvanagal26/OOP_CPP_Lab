#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool isBalanced(const string& exp) {
    stack<char> st;
    for (char c : exp) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else {
            if (st.empty()) return false;
            char top = st.top();
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) return false;
            st.pop();
        }
    }
    return st.empty();
}
int main() {
    cout << boolalpha << isBalanced("[()]{}{[()()]()}") << "\n";
    cout << boolalpha << isBalanced("[(])") << "\n";
    return 0;
}