#include <iostream>
#include <cmath>
using std::cout, std::endl;


truct Vector2f
{
    float x, y;
};

Vector2f operator+(Vector2f left, Vector2f right)
{
    Vector2f result = {left.x + right.x, left.y + right.y};
    return result;
}

Vector2f operator*(Vector2f left, float right)
{
    Vector2f result = {left.x * right, left.y * right};
    return result;
}

Vector2f operator*(float left, Vector2f right)
{
    Vector2f result = {left * right.x, left * right.y};
    return result;
}

Vector2f& operator+=(Vector2f& left, Vector2f right)
{
    left.x += right.x;
    left.y += right.y;
    return left;
}

float getDistance(Vector2f a, Vector2f b)
{
    return std::sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

std::ostream& operator<<(std::ostream& out, Vector2f right)
{
    out << "(" << right.x << ", " << right.y << ")";
    return out;
}


class Shape
{
protected:
    Vector2f mPosition;

public:
    Shape(Vector2f position) : mPosition(position) {}

    Vector2f getPosition() const
    {
        return mPosition;
    }

    void setPosition(Vector2f newPosition)
    {
        mPosition = newPosition;
    }

    void move(Vector2f change)
    {
        mPosition += change;
    }

    virtual float calculatePerimeter() const = 0; // Чисто виртуальная функция
};


class Circle : public Shape
{
private:
    float mRadius;

public:
    Circle(Vector2f position, float radius) : Shape(position), mRadius(radius) {}

    float calculatePerimeter() const override
    {
        return 2 * std::numbers::pi * mRadius;
    }
};


class Rectangle : public Shape
{
private:
    float mWidth;
    float mHeight;

public:
    Rectangle(Vector2f position, float width, float height) : Shape(position), mWidth(width), mHeight(height) {}

    float calculatePerimeter() const override
    {
        return 2 * (mWidth + mHeight);
    }
};


class Triangle : public Shape
{
private:
    Vector2f mPointA;
    Vector2f mPointB;
    Vector2f mPointC;

public:
    Triangle(Vector2f position, Vector2f pointA, Vector2f pointB, Vector2f pointC) : 
             Shape(position), mPointA(pointA), mPointB(pointB), mPointC(pointC) {}

    float calculatePerimeter() const override
    {
        return getDistance(mPointA, mPointB) + getDistance(mPointB, mPointC) + getDistance(mPointC, mPointA);
    }
};

int main()
{
    Circle a({0, 0}, 10);
    a.move({5, 5}); 
    cout << "Circle perimeter: " << a.calculatePerimeter() << endl;

    Rectangle b({0, 0}, 100, 200);
    b.move({10, 10}); 
    cout << "Rectangle perimeter: " << b.calculatePerimeter() << endl;

    Triangle c({0, 0}, {5, 2}, {-7, 5}, {4, 4});
    c.move({-5, -5});
    cout << "Triangle perimeter: " << c.calculatePerimeter() << endl;
}