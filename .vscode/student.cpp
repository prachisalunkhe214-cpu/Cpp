#include <iostream>
using namespace std;
class Student {
    protected:
    int roll_no;
    string name;
    public:
    
        void getStudent()
        {
            cout<<"enter the roll no"<<endl;
            cin>>roll_no;
            cout<<"enter the name"<<endl;
            cin>>name;
        }
    
};
class Marks:public Student {
    protected:
    float m1,m2,m3;
    public:
    void getMarks ()
    {
        cout<<"enter marks in the three subjects"<<endl;
        cin>>m1>>m2>>m3;
    }

};
class Result:public Marks {
    public:
    void display(){
    float total=m1+m2+m3;
    float percentage=total/3;
     cout<< "\nRoll No: " << roll_no;
        cout << "\nStudent Name: " << name;
        cout << "\nTotal Marks: " << total;
        cout << "\nPercentage: " << percentage << "%";


        if (percentage >=90)
        cout<<"grade A"<<endl;
        else if(percentage >=78)
        cout <<"grade B"<<endl;
        else
        cout<<"work hard"<<endl;
    }
};
int main()
{
    Result r;
    r.getStudent();
    r.getMarks();
    r.display();
    return 0;
}