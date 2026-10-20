#include <iostream>
using namespace std;

class Shape {
public:
    void display() {
        cout << "Area of Shape" << endl;
    }
};

class Circle : public Shape {
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    void area() {
        display();
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

    void area() {
        display();
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

    void area() {
        display();
        cout << "Triangle Area: " << 0.5 * base * height << endl;
    }
};

int main() {
    Circle c(5);
    Rectangle r(4, 6);
    Triangle t(4, 8);

    c.area();
    r.area();
    t.area();

    return 0;
}