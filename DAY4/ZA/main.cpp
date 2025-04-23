#include <iostream>
#include <vector>

using namespace std;

int n, res, arr[1005], ct[1005];

int main() {

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        ct[arr[i]]++;
    }

    for (int i = 0; i < 1005; i++) {
        if (ct[i] > 0) {
            res++;           
        }
    }

    cout << res;

    return 0;
}