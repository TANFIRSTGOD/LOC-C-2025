#include <iostream>

using namespace std;

long n, tot, most_ex, curr;

int main() {
    
    cin >> n;

    for (int i=0; i < n; i++) {
        cin >> curr;
        if (curr > most_ex) {
            most_ex = curr;
        }
        tot += curr;
        curr = 0;
    }

    cout << most_ex << ' ' << tot;

    return 0;
}