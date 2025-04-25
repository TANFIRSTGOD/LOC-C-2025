#include <iostream>

using namespace std;

// inputs: n, m as the grid
// n lines of characters
// m collumns

//outputs: y and x positions of the L character

int n, m;

string key = "LOCAICAMP";
bool flag = false;

int y, x;

int main() {

    cin >> n >> m;

    char arr[n][m] = {' '};

    for (int i = 0; i < n; i++) {
        for (int v = 0; v < m; v++) {
            cin >> arr[n][m];
        }
    }

    //check sideways Left to Right

    for (int i = 0; i < n; i++) {
        for (int v = 0; v < m; v++) {
            int temp = v;
            for (char ch :key) {
                if (arr[i][temp] == ch) {
                    if (arr[i][temp] == 'L') {
                        y = i;
                        x = v;
                    }
                    flag = true;
                    //cout << ch << '\n';
                    temp++;
                } else {
                    flag = false;
                    break;
                }
            }
        }
    }

    if (y == 0 && x == 0) {
        cout << "NO";
    }
    else{
        cout << y << x;
    }

    return 0;
}