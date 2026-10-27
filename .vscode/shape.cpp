#include <iostream>
using namespace std;
class Shape 
{
    public:
    virtual void area() {
        cout<<"area of shape"<<endl;
    }

};
class Circle :public Shape
{
    public:
    float r;
    public:
    Circle(float radius){
        r=radius;
    }
    void area() __override{
        cout<<"Area of circle "<<3.14*r*r<< endl;
        

    }

}