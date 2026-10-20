#include <iostream>
using namespace std;
class Person
{
    protected:
    string name;
    int age;

    public:
    Person(string n,int a){
        name=n;
        age = a;
    }
} ;
class Student:public Person{
    int roll_number;
    string course ;
    public:
    Student(string n,int a,int r,string c)
    :Person(n,a) {
        roll_number =r;
        course=c;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Course: " << course << endl;
    }
};
int main(){
    Student s("Prachi",19,38,"CSE");
    s.display();
    return 0;
}
