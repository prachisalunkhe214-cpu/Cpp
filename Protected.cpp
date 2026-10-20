#include <iostream>
using namespace std;

class Employee {
protected:
    int employeeId;
    float salary;

public:
    Employee(int id, float s) {
        employeeId = id;
        salary = s;
    }
};

class Manager : public Employee {
public:
    Manager(int id, float s) : Employee(id, s) {}

    void display() {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Manager m(101, 45000);
    m.display();
    return 0;
}
