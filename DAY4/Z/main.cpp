#include <iostream>
#include <algorithm>

using namespace std;

int n;

int main() {

    cin >> n;

    long long int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+n);
    cout << max(arr[n-1]*arr[n-2], arr[0]*arr[1]);

}