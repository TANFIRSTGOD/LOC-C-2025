#include <iostream>
#include <cmath>

using namespace std;

int n, k;

int main() {
    cin >> n >> k;
    cout << n*int(pow(3, k));
    return 0;
}