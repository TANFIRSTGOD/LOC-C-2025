#include <iostream>
#include <cmath>

using namespace std;

long long int n, k;

int main() {
    cin >> n >> k;
    long long int ans = n*(pow(3, k));
    cout << ans;
    return 0;
}