#include <iostream>

using namespace std;

void printStars(int n, int i) {
    for (int x = n-i-1; x > 0; x--) {
        cout << "-";
    }
    for (int v = 0; v < i+1; v++) {
        cout << "*";
    }
}

int n;

int main() {

    cin >> n;

    for (int i = 0; i < n; i++) {
        printStars(n, i);
        cout << '\n';
    }

    return 0;
}