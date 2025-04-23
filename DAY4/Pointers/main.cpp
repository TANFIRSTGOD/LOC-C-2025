#include <iostream>

using namespace std;

int main() {
    // int num = 9;
    // int *pointr = &num;

    int arr[7] = {1, 4, 5};

    // for (int i = 0; i < 2; i++) {
    //     cin >> arr[i];
    // }

    for (int i :arr) {
        cout << i << ' ';
    }

    return 0;
}