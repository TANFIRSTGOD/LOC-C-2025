#include <iostream>

using namespace std;

int n, x, arr[1005];

int main() {

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> x;

    for (int i :arr) {
        if (i == x) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}