#include <iostream>

using namespace std;

class Shape
{
protected:
    float width, height;
public:
    void setWidth(float w){
        width=w;
    }
    float getWidth(){
        return width;
    }
     void setHeight(float h){
        height=h;
    }
    float getHeight(){
        return height;
    }
    Shape(float w,float h){
        width=w;
        height=h;
    }
    float showWidth(){
       return width;
    }
    float showHeight(){
        return height;
    }
    float AreaOfATriangle(){
        float area=(width*height)/2;
        return area;
    }
    float AreaOfARectangle(){
        float area=width*height;
        return area;
    }
};

int main()
{
    Shape s1=Shape(6,5);
    float s1width,s1height;
    s1width=s1.showWidth();
    s1height=s1.showHeight();
    float a1,a2;
    a1=s1.AreaOfATriangle();
    a2=s1.AreaOfARectangle();
    cout<<"\nArea of a Triangle and a Rectangle which are having width "<<s1width<<" and height "<<s1height<<endl;
    cout<<"Triangle - "<<a1<<endl;
    cout<<"Rectangle - "<<a2<<endl;

    return 0;
}
