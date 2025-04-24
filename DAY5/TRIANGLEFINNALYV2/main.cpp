#include <iostream>

using namespace std;

int checkMod(int v) {
    return v%2;
}

int n;

int main() {

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int v = 0; v < i+1; v++) {
            if (checkMod(v)==0) {
                cout << "*";
            } else {
                cout << "-";
            }
        }
        cout << '\n';
    }

    return 0;
}