#include <iostream>

using namespace std;

int n;

int main() {

    cin >> n;

    int arr[n];
    int temp = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i: arr) {
        if (i%2 == 0) {
            cout << i << ' ';
        }
    }

    return 0;
}