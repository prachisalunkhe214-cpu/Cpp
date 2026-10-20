#include <iostream>
using namespace std;

class Academic {
protected:
    float marks;

public:
    Academic(float m) {
        marks = m;
    }
};

class Sports {
protected:
    float score;

public:
    Sports(float s) {
        score = s;
    }
};

class Result : public Academic, public Sports {
public:
    Result(float m, float s) : Academic(m), Sports(s) {}

    void display() {
        cout << "Academic Marks: " << marks << endl;
        cout << "Sports Score: " << score << endl;
        cout << "Final Result: " << marks + score << endl;
    }
};

int main() {
    Result r(85, 10);
    r.display();
    return 0;
}