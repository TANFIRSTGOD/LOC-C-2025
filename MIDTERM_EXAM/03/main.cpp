#include <iostream>

using namespace std;

int r, c, i, j, res;

int main() {

    cin >> r >> c;
    cin >> i >> j;

    long long int arr[r][c] = {0};

    for (int i = 0; i < r; i++) {
        for (int v = 0; v < c; v++) {
            cin >> arr[i][v];
        }
    }

    for (int i: arr[i-1]) {
        res += i;       
    }

    for (int i = 0; i < r; i++) {
        res += arr[i][j-1];
    }

    res -= arr[i-1][j-1];

    cout << res;

    return 0;
}