#include <stdio.h>
#include <math.h>

struct point

{
    double x, y;
};

typedef struct point Point;

void print_point(Point p)

{
    printf("(%.2lf, %.2lf)", p.x, p.y);
}

double distance(Point p1, Point p2)
{
    double dx = p2.x - p1.x;
    
    double dy = p2.y - p1.y;
    
    return sqrt(dx * dx + dy * dy);
}

typedef struct triangle Triangle;

void print_triangle(Triangle t)
{
    printf("{");
    
    print_point(t.a);
    printf(", ");
    
    print_point(t.b);
    
    printf(", ");
    
    print_point(t.c);
    
    printf("}");
}


int main()

{
    Point p = {1.23, 4.56};
    
    print_point(p);

    Triangle t = {{1.00, 0.00}, {0.50, 2.00}, {0.00, 1.50}};
    
    print_triangle(t);

    Point p1 = {1.0, 2.0};
    
    Point p2 = {4.0, 6.0};
    
    double dist = distance(p1, p2);
    
    printf("Distance: %.2lf\n", dist);
}