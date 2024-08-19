#include <iostream>

using namespace std;

class Student{
public:
    string Name;
    int rollNo;

    void showInfo(){
        cout<<"Name -"<<Name<<endl;
        cout<<"Roll No -"<<rollNo<<endl;
    }
};

class Triangle{
public:
    int s1;
    int s2;
    int s3;

    int Area(){
        int area=(s1*s2)/2;
        return area;
    }

    int Perimeter(){
        int perimeter=s1+s2+s3;
        return perimeter;
    }
};

class TriangleProtected{
protected:
    int s1;
    int s2;
    int s3;

public:
    void setSide1(int S1){
        s1=S1;
    }
    int getSide1(){
        return s1;
    }
    void setSide2(int S2){
        s2=S2;
    }
    int getSide2(){
        return s2;
    }
    void setSide3(int S3){
        s3=S3;
    }
    int getSide3(){
        return s3;
    }
    TriangleProtected(int S1,int S2,int S3){
        s1=S1;
        s2=S2;
        s3=S3;
    }
    int Area(){
        int area=(s1*s2)/2;
        return area;
    }

    int Perimeter(){
        int perimeter=s1+s2+s3;
        return perimeter;
    }
};

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

class Employee{
protected:
    int salary;
public:
    string name;
    int yearOfJoining;
    string address;

    void showInfo(){
        cout<<name<<"\t";
        cout<<yearOfJoining<<"\t\t\t";
        cout<<address<<"\t";
        cout<<"\n";
    }
};

int main(){
    //Question 02
    Student s1={"John",2};
    s1.showInfo();

    //Question 03
    Triangle t1={3,4,5};
    cout<<"\nArea of the triangle having sides of "<<t1.s1<<","<<t1.s2<<" and "<<t1.s3<<endl;
    cout<<t1.Area()<<"\n";
    cout<<"\nPerimeter of the triangle having sides of "<<t1.s1<<","<<t1.s2<<" and "<<t1.s3<<endl;
    cout<<t1.Perimeter()<<"\n";

    //Question 04
    TriangleProtected T1=TriangleProtected(3,4,5);
    cout<<"\nArea of the triangle having sides of "<<T1.getSide1() <<","<<T1.getSide2()<<" and "<<T1.getSide3() <<endl;
    cout<<T1.Area()<<"\n";
    cout<<"\nArea of the triangle having sides of "<<T1.getSide1() <<","<<T1.getSide2()<<" and "<<T1.getSide3() <<endl;
    cout<<T1.Perimeter()<<"\n";

    //Question 05
    int l1,b1;
    cout<<"\nEnter the value for the length of the Rectangle :";
    cin>>l1;
    cout<<"\nEnter the value for the breadth of the Rectangle :";
    cin>>b1;
    Area R1={l1,b1};
    R1.setDim(l1,b1);
    R1.getArea();

    //Question 06
    cout<<"\nName"<<"\t"<<"Year of Joining"<<"\t\t"<<"Address\n";
    Employee e1;
    e1.name="Robert";
    e1.yearOfJoining=1994;
    e1.address="64C- WallsStreat";
    Employee e2;
    e2.name="Sam";
    e2.yearOfJoining=2000;
    e2.address="68D- WallsStreat";
    Employee e3;
    e3.name="John";
    e3.yearOfJoining=1999;
    e3.address="26B- WallsStreat";
    e1.showInfo();
    e2.showInfo();
    e3.showInfo();



    return 0;
}
