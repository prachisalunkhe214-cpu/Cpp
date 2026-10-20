#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }
};

class Student : virtual public Person {
public:
    Student(string n, int a) : Person(n, a) {}
};

class Employee : virtual public Person {
public:
    Employee(string n, int a) : Person(n, a) {}
};

class TeachingAssistant : public Student, public Employee {
public:
    TeachingAssistant(string n, int a)
        : Person(n, a), Student(n, a), Employee(n, a) {}

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    TeachingAssistant t("Prachi", 19);
    t.display();
    return 0;
}