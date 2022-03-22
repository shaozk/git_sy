#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;
    int n = str.size();
    int left = 1, right;
    if (n % 2 == 1) {
        right = n - 2;
    } else {
        right = n - 1;
    }
    while (left < right) {
        swap(str[left], str[right]);
        left += 2;
        right -= 2;
    } 
    for (int i = 0; i < str.size(); i++) {
        cout << str[i];
    }
    cout << endl;
    return 0;
}
