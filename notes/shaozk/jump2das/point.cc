#include <cstdio>

class Point{
    int x,y;
public:
    void set_xy(int a, int b) {
        x = a;
        y = b;
    }
    
    void print_xy() {
        printf("%d %d\n", x, y);
    }
};

int main() {
    Point p1, p2;
    p1.set_xy(1,2);
    p2.set_xy(3,4);
    p1.print_xy();
    p2.print_xy();
}
