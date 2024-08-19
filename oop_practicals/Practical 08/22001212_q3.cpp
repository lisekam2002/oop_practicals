#include <iostream>
using namespace std;
class Pointer{
public:
    float X,Y;

    Pointer(float x,float y):X(x),Y(y){};

    void operator + (const Pointer &other){
        Pointer Sum(0,0);
        Sum.X=X+other.X;
        Sum.Y=Y+other.Y;
        cout<<"After the addition sum is : "<<Sum.X<< ","<<Sum.Y<<endl;
    }
    
    friend std::ostream& operator<<(std::ostream& os, const Pointer& point) {
        os << "(" << point.X << ", " << point.Y << ")";
        return os;
    }
    
};

int main(){
    Pointer p1=Pointer(2,3);
    Pointer p2=Pointer(1,4);
    std::cout << "Point 1: " << p1 << std::endl;
    std::cout << "Point 2: " << p2 << std::endl;
    p1+p2;
    
}