#include <iostream>

using namespace std;

int n, sum;

int main() {

    cin >> n;

    int arr[n];

    for (int i :arr) {
        int x = 0;
        cin >> x;
        sum += x;
    }

    cout << sum;

    return 0;
}