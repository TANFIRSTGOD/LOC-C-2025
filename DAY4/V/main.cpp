#include <iostream>

using namespace std;

int n, sum;

int main() {
    cin >> n;
    
    int arr[n];
    

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 0) {
            sum++;
        }
    }

    cout << sum;
}