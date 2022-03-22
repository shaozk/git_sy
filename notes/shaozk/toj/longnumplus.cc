#include <iostream>

using namespace std;

int main() {
    string a;
    string b;
    cin >> a >> b;
    string res = "";
    int n = a.size() - 1, m = b.size() - 1;
    int c = 0;
    while (n >= 0 || m >= 0) {
        if (n >= 0) {
            c += a[n] - '0';
        }
        if (m >= 0) {
            c += b[m] - '0';
        }
        res += (char)(c % 10 + '0');
        c /= 10;
        m--; n--;
    }
    if (c == 1) {
        res += "1";
    }
    // reverse
    int left = 0, right = res.size() - 1;
    while (left < right) {
        int t = res[left];
        res[left] = res[right];
        res[right] = t;
        left++; right--;
    }
    cout << res << endl;

    return 0;
}
