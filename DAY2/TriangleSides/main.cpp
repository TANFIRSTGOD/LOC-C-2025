#include <iostream>

using namespace std;

int x, y, z;

int main() {
    cin >> x >> y >> z;

    if (x + y > z && x + z > y && y + z > x) {
        cout << "Can";
    } else {
        cout << "Cannot";
    }

    return 0;
}