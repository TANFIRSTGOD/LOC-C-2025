#include <iostream>

using namespace std;

int temp;

int main() {

    cin >> temp;

    if (temp > 35) {
        cout << "CANCEL SCHOOL";
    } else if (temp > 30) {
        cout << "CANCEL TWO CLASSES";
    } else {
        cout << "NORMAL CLASSES";
    }

    return 0;
}