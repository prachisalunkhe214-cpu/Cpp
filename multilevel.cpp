#include <iostream>
using namespace std;

class Employee {
protected:
    int id;
    string name;

public:
    Employee(int i, string n) {
        id = i;
        name = n;
        cout << "Employee constructor called" << endl;
    }
};

class Manager : public Employee {
protected:
    double salary;

public:
    Manager(int i, string n, double s)
        : Employee(i, n) {
        salary = s;
        cout << "Manager constructor called" << endl;
    }
};

class SeniorManager : public Manager {
    string department;

public:
    SeniorManager(int i, string n, double s, string d)
        : Manager(i, n, s) {
        department = d;
        cout << "SeniorManager constructor called" << endl;
    }

    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    SeniorManager sm(101, "Riya", 60000, "IT");
    sm.display();
    return 0;
}