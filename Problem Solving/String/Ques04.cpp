#include <iostream>
#include <string>
#include <type_traits>
using namespace std;
template <typename T>
void checkMutability(T&) {
    if (is_const<T>::value) {
        cout << "Immutable String (const-qualified)\n";
    } else {
        cout << "Mutable String (modifiable in-place)\n";
    }
}
int main() {
    string mutableStr = "Hello";
    const string immutableStr = "World";
    checkMutability(mutableStr);
    checkMutability(immutableStr);
    return 0;
}
