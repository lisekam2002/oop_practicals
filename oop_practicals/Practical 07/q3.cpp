#include <iostream>

using namespace std;

class Employee{
protected:
    int salary;
public:
    string name;
    int yearOfJoining;
    string address;

    void showInfo(){
        cout<<name<<"\t\t\t";
        cout<<yearOfJoining<<"\t\t\t";
        cout<<address<<"\t";
        cout<<"\n";
    }
};

int main(){
    
   
    cout<<"\nName"<<"\t"<<"Year of Joining"<<"\t\t\t"<<"Address\n";
    Employee e1;
    e1.name="Robert";
    e1.yearOfJoining=1994;
    e1.address="64C- WallsStreat";
    Employee e2;
    e2.name="Sam  ";
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
