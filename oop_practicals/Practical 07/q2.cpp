#include <iostream>

using namespace std;

class Area{
public:
    int length;
    int breadth;

    int setDim(int l,int b){
        length=l;
        breadth=b;
        return length,breadth;
    }

    void getArea(){
        int area=length*breadth;
        cout<<"\nArea of the Rectangle is: "<<area;
    }
};

int main(){
    
    //Question 05
    int l1,b1;
    cout<<"\nEnter the value for the length of the Rectangle :";
    cin>>l1;
    cout<<"\nEnter the value for the breadth of the Rectangle :";
    cin>>b1;
    Area R1={l1,b1};
    R1.setDim(l1,b1);
    R1.getArea();

    return 0;
}
