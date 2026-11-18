#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
};

class Circle : public Shape {
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    void area() {
        cout << "Area of circle: " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape {
    float length, breadth;

public:
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }

    void area() {
        cout << "Area of rectangle: " << length * breadth << endl;
    }
};

class Triangle : public Shape {
    float base, height;

public:
    Triangle(float b, float h) {
        base = b;
        height = h;
    }

    void area() {
        cout << "Area of triangle: " << 0.5 * base * height << endl;
    }
};

void displayArea(Shape &s) {
    s.area();
}

int main() {
    Circle c(5);
    Rectangle r(4, 6);
    Triangle t(6, 5);

    displayArea(c);
    displayArea(r);
    displayArea(t);

    return 0;
}