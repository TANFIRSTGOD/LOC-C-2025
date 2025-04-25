#include <iostream>
#include <cmath>

using namespace std;

int m;
int n;

void takeInValue(int pwr[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> pwr[i];
    }
}

int findSumOfArr(int arr[], int length) {
    int result = 0;
    for (int i = 0; i < length; i++) {
        result += arr[i];
    }
    return result;
}

bool isPrime(int num) {

    if (num <= 0 || num == 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }

    return true;
}

int main() {

    cin >> m;
    string ans[m] = {" "};
    for (int i = 0; i < m; i++) {
        n = 0;
        cin >> n;

        int pwr[n] = {0};
        
        takeInValue(pwr, n);
        
        int temp1 = 0;
        int temp2 = 0;
        int sum = 0;

        sum = findSumOfArr(pwr, n);
        
        if (sum%2==0) {
            temp1 = pwr[0];
            temp2 = pwr[n-1];

            pwr[0] = temp2;
            pwr[n-1] = temp1;

            pwr[n-1]++;

        } else {
            temp1 = pwr[1];
            temp2 = pwr[n-1];

            pwr[1] = temp2;
            pwr[n-1] = temp1;

            pwr[n-1] += 3;
        }

        if (isPrime(pwr[n-1])==false) {
            ans[i] = "No";
        } else {
            ans[i] = "Yes";
        }
    }

    for (int i = 0; i < m; i++) {
        cout << ans[i] << '\n';
    }

    return 0;
}