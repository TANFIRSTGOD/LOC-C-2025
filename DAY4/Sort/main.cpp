#include <iostream>
#include <algorithm>

using namespace std;

int arr[] = {3, 5, 7 , 1 , 14};

int main() {
    sort(arr, arr+5);
    for (int i:arr) {
        cout << i << ' ';
    }
}