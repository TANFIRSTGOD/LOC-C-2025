#include <iostream>

using namespace std;

int n;

int main() {
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int v = 0; v < n; v++) {
            cout << 'X';
        }
        cout << '\n';
    }
    return 0;
}