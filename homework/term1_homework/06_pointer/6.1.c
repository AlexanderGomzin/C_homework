#include <stdio.h>
#include <math.h>

struct point
{
	double x, y;
};

typedef struct point Point;

struct triangle
{
	Point a, b, c;
};

typedef struct triangle Triangle;

void print_point(Point p)
{
	printf("Point: (%f, %f)", p.x, p.y);
}

void print_triangle(Triangle t)
{
	printf("Triangle: {(%f, %f), (%f, %f), (%f, %f)}", t.a.x, t.a.y, t.b.x, t.b.y, t.c.x, t.c.y);
}

void distance(Point a, Point b)
{
	distance = sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
	return distance;
}

void get_triangle_perimeter(const Triangle* t)
{
	perimeter = sqrt(pow(t.b.x - t.a.x, 2) + pow(t.b.y - t.a.y, 2)) + sqrt(pow(t.c.x - t.b.x, 2) + pow(t.c.y - t.b.y, 2)) + sqrt(pow(t.c.x - t.a.x, 2) + pow(t.c.y - t.a.y, 2));
	return perimeter
}

void get_triangle_area(const Triangle* t)
{

}

void moved_triangle(const Triangle* t, Point m)
{

}

void move_triangle(Triangle* t, Point m)
{

}
int main()
{

}