#include <iostream>
#include <string>

using namespace std;

class Student {
protected:
    int roll_no;
    string name;

public:
    void getStudent() {
        cout << "Enter roll no: ";
        cin >> roll_no;
        cout << "Enter student name: ";
        cin >> name;
    }
};

class Marks : public Student {
protected:
    float m1, m2, m3;

public:
    void getMarks() {
        cout << "Enter marks in the three subjects: ";
        cin >> m1 >> m2 >> m3;
    }
};

class Result : public Marks {
public:
    void display() {
        float total = m1 + m2 + m3;
        float percentage = total / 3.0f;

        cout << "\nRoll NO: " << roll_no;
        cout << "\nName: " << name;
        cout << "\nTotal marks: " << total;
        cout << "\nPercentage: " << percentage;

        if (percentage >= 90)
            cout << "\nGrade: A+" << endl;
        else if (percentage >= 80)
            cout << "\nGrade: A" << endl;
        else if (percentage >= 70)
            cout << "\nGrade: B" << endl;
        else if (percentage >= 40)
            cout << "\nGrade: C" << endl;
        else
            cout << "\nFAIL" << endl;
    }
};

int main() {
    Result r;
    r.getStudent();
    r.getMarks();
    r.display();
    return 0;
}
