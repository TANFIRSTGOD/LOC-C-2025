#include <iostream>

using namespace std;

int main() {

    int arr[1005], n, x;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> x;

    for (int i = 0; i<n ; i++) {
        cout << arr[i] + x << ' ';
    }

    return 0;
}