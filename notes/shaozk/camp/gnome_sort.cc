#include <iostream>

using std::cout;
using std::endl;
using std::swap;

void PrintArr(int* S, int n) {
    for(int i = 0; i < n; i++) {
        cout << S[i];
    }
    cout << endl;
}

void NaiveGnomeSort(int *S, int n) {
    for(int i = 1; i < n; ) {
        if(i < 1 || S[i - 1] <= S[i]) {
            i++;
        } else {
            swap(S[i - 1], S[i]);
            i--;
        }
    }
}

void ImporvedGnomeSort(int *S, int n) {
    for(int k = 1; k < n; k++) {
        for(int i = k; 0 < i && S[i - 1] > S[i]; i--) {
            swap(S[i - 1], S[i]);
        }
    }
}


int main() {
    int S[7] = {4,5,6,7,1,2,3};
    PrintArr(S, 7);
    // NaiveGnomeSort(S, 7);
    ImporvedGnomeSort(S, 7);
    PrintArr(S, 7);
    
    return 0;
}
