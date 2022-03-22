#include <iostream>

using namespace std;

int numof2(int n) {
    int num = 0;
    while(n) {
        if(n % 10 == 2) {
            num++;
        }
        n /= 10;
    }
    return num;
}

int main() {
    int l, r;
    int sum = 0;
    cin >> l >> r;
    while(l <= r) {
        sum += numof2(l);
        l++;
    }
    cout << sum << endl;
    return 0;
}
