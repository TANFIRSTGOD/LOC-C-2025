#include <iostream>

using namespace std;

int main() {
    
    cin >> n;

    int arr[MAX_TYPE] = {0};
    int lastIndx[MAX_TYPE] = {-1};

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        lastIndx[arr[i]] = i;
    }

    int minIndex = n;
    int res = -1;

    for (int i = 0; i < n; i++) {
        if (lastIndx[arr[i]] == i) {
            cout << arr[i] << '\n';
        }
    }

    return 0;
}