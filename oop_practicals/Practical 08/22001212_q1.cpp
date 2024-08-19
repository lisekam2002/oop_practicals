#include <iostream>

using namespace std;

class Shape{
public:
    int length;
    int width;
    int radius;

    Shape(int l,int w){
        length=l;
        width=w;
        radius=0;
    }

    Shape(int r){
        length=0;
        width=0;
        radius=r;
    }

    void Area();
    void Area(const float pi);
};

void Shape::Area(){
    cout<<"Area of the Rectangle which the length="<<length<<" & width="<<width<<" is: "<<length*width<<endl;
}

void Shape::Area(const float pi){
    cout<<"Area of the circle which has radius="<<radius<<" is: "<<pi*radius*radius<<endl;
}

int main(){
    Shape s1=Shape(4,5);
    Shape s2=Shape(7);

    s1.Area();
    s2.Area(3.14);

    return 0;
}