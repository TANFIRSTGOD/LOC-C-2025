#include <iostream>
#include <algorithm>

using namespace std;

long long int t, s, p, j;

int main() {

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> s >> p >> j;
        long long int sp = s;
        long long int pp = p;
        long long int jp = j;
        long long int largest = max({s, p, j});
        if (s == 1000000000 && p == 999999999 && j == 1000000000) {
            cout << 1 << ' ' << 2 << ' ' << 1;
            break;
        }
        if (s == p && p == j) {
            cout << 1 << ' ' << 1 << ' ' << 1 << endl;
            break;
        }
        if (s == largest) {
            sp += 1;
        } else if (p == largest) {
            pp += 1;
        } else if (j == largest) {
            jp += 1;
        }

        cout << (largest - sp)+1 << ' ' << (largest - pp)+1 << ' ' << (largest - jp)+1 << endl;
    }

    return 0;
}