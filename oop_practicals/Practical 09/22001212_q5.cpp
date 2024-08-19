#include <iostream>

using namespace std;

class Circle{
protected:
    int Radius;
};

class Rectangle{
protected:
    int Length;
    int Breadth;
};

class Cylinder:public Circle, public Rectangle{
 public:
    Cylinder(int r,int l){
        Radius=r;
        Length=l;
    }

    void Area(){
        cout<<"Area of the Cylinder is :"<<(2*(22/7)*Radius*Length)+(2*(22/7)*Radius*Radius)<<endl;
    }

    void Volume(){
        cout<<"Volume of the Cylinder is :"<<(22/7)*Radius*Radius*Length<<endl;
    }
};

int main()
{
    int r,h;
    cout<<"Enter the radius of the circle : ";
    cin>>r;
    cout<<"\nEnter the length of the rectangle : ";
    cin>>h;
    Cylinder c1=Cylinder(r,h);
    c1.Area();
    c1.Volume();
    
    return 0;
}
