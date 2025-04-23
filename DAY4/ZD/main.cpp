#include <iostream>
#include <cmath>

using namespace std;

int n, arr[1005];

int main() {

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        arr[i] = abs(arr[i]);
        cout << arr[i] << ' ';
    }

    return 0;
}