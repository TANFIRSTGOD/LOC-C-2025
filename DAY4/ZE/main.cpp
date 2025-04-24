#include <iostream>

using namespace std;

int main() {
    cin.tie(0) -> sync_with_stdio(0);

    int n, ans, p(0);
    cin >> n;
    int arr[n+5], last[n+5];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool flag = false;

    for (int i = n - 1; i >= 0; i--) {
        flag = false;
        for (int j = 0; j < p; j++) {
            if (arr[i] == last[j]) {
                flag = true;
            }
        }

        if (flag) {
            continue;
        }

        last[p] = arr[i];

        p++;
    } 

    cout << last[p-1];

    return 0;
}