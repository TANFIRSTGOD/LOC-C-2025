#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string n;

int main() {

    cin >> n;

    string rev = n;
    reverse(n.begin(), n.end());

    if (n == rev) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}