#include <cstdio>

class Point{
    int x, y;
    int * arr;
public:
    Point(int a, int b) {
        x = a;
        y = b;
        arr = new int[10];
    }
    void print_xy() {
        printf("%d %d\n", x, y);
    }
    ~Point() {
        delete[] arr;
    }
};

int main() {
    Point a(1, 2);
    a.print_xy();
}
