#include <iostream>
#include <string>

using namespace std;

string str;
int main() {

    cin >> str;
    str.erase(str.length() - 2);
    cout << str;
}