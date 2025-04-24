#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int h, m, t;

int main() {

    cin >> h >> m;
    cin >> t;

    int totMin = h*60+m;

    totMin += t;

    if (totMin - 24*60 > 0) {
        totMin -= 24*60;
    }

    int nh = floor(totMin/60);
    int nm = totMin % 60;

    if (nh < 10) {
        cout << setfill('0') << setw(1) << nh << ' ' << nm << endl; 
    } else {
        cout << nh << ' ' << nm << endl;
    }

    return 0;
}