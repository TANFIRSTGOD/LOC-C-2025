<<<<<<< HEAD
=======
#include <cstdio>
#include <vector>
#include <algorithm>
>>>>>>> ed0cbcafa80e2afa07859cc72eb25d5cd33b3cac
#include <iostream>
#include <cmath>

using namespace std;

int p;

bool isPrime(int n) {
    if (n == 2) return true;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int next_prime(int n) {
    int next = n + 1;
    while (true) {
        if (isPrime(next)) {
            return next;
        }
        next++;
    }
}

int last_prime(int n) {
    int last = n - 1;
    while (true) {
        if (isPrime(last)) {
            return last;
        }
        last--;
    }
}

int main() {

    cin >> p;

    int left = 0;
    int right = 0;

    if (p == 2) {
        left = -1;
    }
    else {
        left = last_prime(p);
    }

    right = next_prime(p);

    if (left < 0) {
        cout << "wall" << ' ' << right;
    } else {
        cout << left << ' ' << right;
    }


    return 0;
}