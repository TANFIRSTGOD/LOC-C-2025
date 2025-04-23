#include <iostream>

using namespace std;

int n, arr[1005];

int main() {

    int temp;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr[i] = temp;
        temp = 0;
    }

    cout << arr[n/2];

    return 0;
}