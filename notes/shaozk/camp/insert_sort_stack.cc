#include <stack>
#include <vector>
#include <iostream>

using namespace std;

/**
  insert sort using stack and O(1) space.
  */
stack<int> sorting(stack<int> R) {
    stack<int> S;
    if(R.empty()) {
        return S;
    }
    int tmp = R.top();
    R.pop();
    while (!R.empty() || (!S.empty() && S.top() > tmp)) {
        if (S.empty() || S.top() <= tmp) {
            S.push(tmp);
            tmp = R.top();
            R.pop();
        } else {
            R.push(S.top());
            S.pop();
        }
    }
    S.push(tmp);
    return S;
}
    

int main() {
    int n;
    cin >> n;
    stack<int> R;
    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        R.push(tmp);
    }
    stack<int> S = sorting(R);
    vector<int> ans;
    while (!S.empty()) {
        ans.push_back(S.top());
        S.pop();
    }
    for (auto i = ans.rbegin(); i != ans.rend(); ++i) {
        cout << *i << endl;
    }
    return 0;
}
