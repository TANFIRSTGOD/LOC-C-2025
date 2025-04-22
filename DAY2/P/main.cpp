#include <iostream>

using namespace std;

int n;

int main() {

    cin.tie(0)->sync_with_stdio(0);

    cin >> n;

    if (n % 7 == 0 && n % 11 != 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}