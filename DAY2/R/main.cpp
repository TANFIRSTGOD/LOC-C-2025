#include <iostream>

using namespace std;

int a, b, c, d;

int main() {

    cin >> a >> b >> c >> d;
    
    if (a > c && a > d) {
        cout << "NO";
    }
    else if (b > c && b > d) {
        cout << "NO";
    }
    else if (b <= c && a <= c) {
        cout << "YES";
    }

    return 0;
}