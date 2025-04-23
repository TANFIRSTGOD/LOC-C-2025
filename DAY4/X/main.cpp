#include <iostream>

using namespace std;

int n;

int main() {

    cin >> n;

    int ans[1005];
    int j = 0;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (i%2==0) {
            //cout << j << '\n';
            ans[j] = temp;
            j++;
        }
    }

    for (int i = 0; i < j; i++) {
        cout << ans[i] << ' ';
    }

    return 0;
}