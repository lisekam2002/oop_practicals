#include <iostream>

using namespace std;

class Shape{
public:
    void printShape(){
        cout<<"This is a Shape"<<endl;
    }
};

class Polygon : public Shape{
public:
 
   void printShape(){
        cout<<"Polygon is a Shape"<<endl;
    }
};

class Rectangle : public Polygon{
public:
    void printShape(){
        cout<<"Rectangle is a polygon"<<endl;
    }
};

class Triangle : public Rectangle{
public:
    void printShape(){
        cout<<"Triangle is a polygon"<<endl;
    }
};

class Square : public Rectangle{
public:
    void printShape(){
        cout<<"Square is a rectangle"<<endl;
    }
};

int main()
{
    Shape s1;
    Polygon p1;
    Rectangle r1;
    Triangle t1;
    Square sq1;
    s1.printShape();
    p1.printShape();
    r1.printShape();
    t1.printShape();
    sq1.printShape();

    return 0;
}
