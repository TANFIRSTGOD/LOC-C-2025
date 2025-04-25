#include <iostream>
#include <cmath>

using namespace std;

int n;

int main() {

    cin >> n;

    char l[n][n] = {'*'};
    char o[n][n] = {'*'};
    char c[n][n] = {'*'};

    int thickness = floor(n/3);

    // L

    for (int r = 0; r < n-thickness; r++) {
        for (int c = n; c > thickness; c--) {
            l[r][c] = ' ';
        }
    }

    for (int r = 0; r < n; r++) {
        for (int c = 0; c > n; c++) {
            cout << l[r][c];
        }
        cout << '\n';
    }

    return 0;
}