#include <iostream>
#include <cmath>

using namespace std;

string n;

int addPow(int n, int power) {
    return int(pow(n, power));
}

int main() {
    
    cin >> n;

    int length = n.length();

    long long int res = 0;

    for (char i: n) {
        switch (i) {
            case '0':
                res += 0;
                break;
            case '1':
                res += 1;
                break;
            case '2':
                res += addPow(2, length);
                break;
            case '3':
                res += addPow(3, length);
                break;
            case '4':
                res += addPow(4, length);
                break;
            case '5':
                res += addPow(5, length);
                break;
            case '6':
                res += addPow(6, length);
                break;
            case '7':
                res += addPow(7, length);
                break;
            case '8':
                res += addPow(8, length);
                break;
            case '9':
                res += addPow(9, length);
                break;
        }
    }

    if (n == to_string(res)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}