#include <iostream>
#include <cmath>

using namespace std;

int m, n;

// m trains, n number of carrages, 
// and then an array of the power level of those carrages

void takeInValue(int pwrl[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> pwrl[i];
    }
}

int findSumOfArr(int arr[], int length) {
    int res = 0;

    for (int i = 0; i < length; i++) {
        res += arr[i];
    }

    return res;
}

bool checkIfDivisibleBy2(int num) {
    if (num%2 == 0) return true;
    else return false;
}

bool isPrime(int num) {

    if (num <= 0 || num == 1) return false;
    
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

        int pwrl[n] = {0};
        
        takeInValue(pwrl, n);
        
        int temp1 = 0;
        int temp2 = 0;
        int sum = 0;

        sum = findSumOfArr(pwrl, n);
        
        if (checkIfDivisibleBy2(sum)) {
            temp1 = pwrl[0];
            temp2 = pwrl[n-1];

            pwrl[0] = temp2;
            pwrl[n-1] = temp1;

            pwrl[n-1]++;

        } else {
            temp1 = pwrl[1];
            temp2 = pwrl[n-1];

            pwrl[1] = temp2;
            pwrl[n-1] = temp1;

            pwrl[n-1] += 3;
        }

        if (isPrime(pwrl[n-1])==false) {
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