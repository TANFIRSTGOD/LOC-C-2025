#include <iostream>
#include <iomanip>

using namespace std;

int n, m, t;

void printTotMin(int tot_min) {
    cout << setfill('0') << setw(2) << tot_min/60 << ' ' << setw(2) << tot_min % 60;
}

int main() {

    cin >> n >> m >> t;

    int tot_min = n*60+m+t;
    tot_min %= 1440;

    printTotMin(tot_min);

    return 0;
}