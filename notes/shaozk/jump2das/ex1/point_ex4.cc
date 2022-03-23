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

    int get_x() {
        return x;
    }

    int get_y() {
        return y;
    }
};

class Segment{
    Point p1, p2;
public:
    void set(Point a, Point b) {
        p1 = a;
        p2 = b;
    }

    void update(Point a, Point b) {
        p1.set_xy(a.get_x(), a.get_y());
        p2.set_xy(b.get_x(), b.get_y());
    }
         
    void print() {
        p1.print_xy();
        p2.print_xy();
    }
};

int main() {
    Point p1, p2, p3;
    p1.set_xy(1,2);
    p2.set_xy(3,4);
    p3.set_xy(5,6);
    Segment s;
    s.set(p1, p2);
    s.print();
    printf("----update----\n");
    s.update(p1, p3);
    s.print();

}
