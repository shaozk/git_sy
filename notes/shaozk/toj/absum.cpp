#include <iostream>

using namespace std;

int main() {
    int n;
    int left = 1;
    int right = 2;
    int sum = left + right;
    cin >> n;
    while(right < n && left < right) {
        if(sum < n) {
            sum += ++right;
        }
        else if(sum == n) {
            cout << left << " " << right << endl;
            sum -= left++;
            sum += ++right;
        }
        while(sum > n) {
            sum -= left++;
        }
    }
    return 0;
}
