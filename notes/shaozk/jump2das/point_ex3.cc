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

    int add_xy() {
        return x + y;
    }
};

int main() {
    Point p1;
    p1.set_xy(1,2);
    printf("%d", p1.add_xy());
}
