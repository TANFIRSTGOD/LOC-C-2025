#include <iostream>

using namespace std;

int n;

int main() {
    cin >> n;
    if (0 <= n && n <= 40) {
        cout << "Emerging";
    } else if (41 <= n && n <= 80) {
        cout << "Developing";
    } else {
        cout << "Achieved";
    }

    return 0;
}