#include <iostream>
#include <cmath>

using namespace std;

int hr, mins, m;

int main() {
    cin >> m;

    hr = floor(m/60);
    mins = m % 60;

    cout << hr << '\n' << mins;

    return 0;
}