#include <iostream>

using namespace std;

int n;

int main() {

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int v = 0; v < i+1; v++) {
            cout << "*";
        }
        cout << '\n';
    }

    return 0;
}