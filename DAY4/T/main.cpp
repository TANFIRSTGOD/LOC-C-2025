#include <iostream>

using namespace std;

int n, sum;

int main() {
    cin >> n;
    
    for (int i = n; i > 0; i--) {
        sum += i*i;
    }

    cout << sum;
}