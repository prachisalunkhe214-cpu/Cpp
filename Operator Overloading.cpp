#include <iostream>
using namespace std;
class Complex {
protected:
    float real, imag;

public:
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    Complex operator+(const Complex &c) {
        return Complex(real + c.real, imag + c.imag);
    }
    void display() {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i" << endl;
        else
            cout << " - " << -imag << "i" << endl;
    }
};
class ScientificComplex : public Complex {
public:
    ScientificComplex(float r, float i) : Complex(r, i) {}
};
int main() {
    ScientificComplex c1(3, 4), c2(2, 5);

    Complex c3 = c1 + c2;

    cout << "First Complex Number: ";
    c1.display();
    cout << "Second Complex Number: ";
    c2.display();
    cout << "Sum: ";
    c3.display();

    return 0;
}