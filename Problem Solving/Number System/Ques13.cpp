#include <iostream>
using namespace std;
bool isHarshad(long long n) {
    if (n <= 0) return false;
    long long temp = n, digitSum = 0;
    while (temp > 0) {
        digitSum += temp % 10;
        temp /= 10;
    }
    return (n % digitSum == 0);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n = 18; 
    cout << (isHarshad(n) ? "Harshad Number" : "Not a Harshad Number") << "\n";
    return 0;
}