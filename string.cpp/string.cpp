#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    char str[n + 1];        // +1 for '\0'

    for(int i = 0 ; i < n; i++) {
        cin >> str[i];
    }

    str[n] = '\0';     // end of string

    for(int i = 0 ; str[i] != '\0'; i++) {
        cout << str[i];
    }

    return 0;
}
