#include <iostream>
using namespace std;
class Shape {
public:
    virtual void calculateArea() = 0;
    virtual ~Shape() = default;
};
class Circle : public Shape {
    float radius;
public:
    Circle(float r) {
        radius = r;
    }
    void calculateArea() override {
        cout << "Circle Area: " << 3.14 * radius * radius << endl;
    }
};
class Rectangle : public Shape {
    float length, breadth;
public:
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }

    void calculateArea() override {
        cout << "Rectangle Area: " << length * breadth << endl;
    }
};
class Triangle : public Shape {
    float base, height;

public:
    Triangle(float b, float h) {
        base = b;
        height = h;
    }
    void calculateArea() override {
        cout << "Triangle Area: " << 0.5 * base * height << endl;
    }
};

int main() {
    Circle c(5);
    Rectangle r(4, 6);
    Triangle t(4, 8);
    Shape *ptr;
    ptr = &c;
    ptr->calculateArea();
    ptr = &r;
    ptr->calculateArea();
    ptr = &t;
    ptr->calculateArea();
    return 0;
}