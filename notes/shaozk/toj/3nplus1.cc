#include <iostream>

using namespace std;

int _3nplus1(int n) {
    int cnt = 1;
    while (n > 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        cnt++;
    }
    return cnt;
}
    

int main() {
    int n;
    cin >> n;
    int left, right;
    for (int i = 0; i < n; i++) {
        cin >> left >> right;
        int cnt = 0;
        while (left <= right) {
            cnt += _3nplus1(left);
            left++;
        }
        cout << cnt << endl;
    }

    
    return 0;
}
