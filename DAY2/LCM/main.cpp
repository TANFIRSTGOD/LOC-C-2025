#include <iostream>
#include <numeric>

using namespace std;

int a,b;

int main() {
    cin >> a >> b;
    cout << (a*b)/gcd(a, b);
    return 0;
}