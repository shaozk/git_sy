#include <iostream>
#include <cstring>

using namespace std;

// version 1
int match1(char *P, char *T) {
    size_t n = strlen(T), i = 0;
    size_t m = strlen(P), j = 0;
    while (j < m && i < n) {
        if (T[i] == P[j]) {
            i++; j++;
        } else {
            i -= j - 1;
            j = 0;
        }
    }
    return i - j;
}

// version 2
int match2(char *P, char *T) {
    size_t m = strlen(P), j = 0;
    size_t n = strlen(T), i = 0;
    for (i = 0; i < n - m + 1; i++) {
        for (j = 0; j < m; j++) {
            if (T[i+j] != P[j]) break;
        }
        if (m <= j) break;
    }
    return i;
}

int main() {
    char T[] = "affaffabb";
    char P[] = "affabb";
    int index1 = match1(P, T);
    int index2 = match2(P, T);
    cout << index1 << " " << index2 << endl;
    return 0;
}
