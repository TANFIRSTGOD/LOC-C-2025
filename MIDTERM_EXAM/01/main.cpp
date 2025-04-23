#include <iostream>

using namespace std;

int n, ans;

int main() {
    cin >> n;
    while (n > 0) {
        if (n == 1) {
            ans += 500;
            n -= 1;
        }
        else if (n > 1 && n < 4) {
            ans += 800;
            n -= 2;
        }
        else if (n > 3 && n < 11) {
            ans += 1500;
            n -= 5;
        }
        else {
            ans += 3000;
            n -= 15;
        }
    }

    cout << ans;
}