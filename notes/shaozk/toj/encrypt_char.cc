#include <iostream>

using namespace std;

char encrypt_char(char c) {
    char e = c;
    if ('a' <= c && c <= 'z' || 'A' <= c && c <= 'Z') {
        if (c == 'z') {
            e = 'A';
        } else if (c == 'Z') {
            e = 'a';
        } else {
            e = char(int(c) + 1);
        }
    }
    return e;
}

int main() {
    string s;
    cin >> s;
    char e;
    for (char c : s) {
        e = encrypt_char(c);
        cout << e;
    }
    cout << endl;
    return 0;
}
