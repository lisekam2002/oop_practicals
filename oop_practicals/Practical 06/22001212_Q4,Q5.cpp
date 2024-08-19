#include <iostream>

using namespace std;

class Volume{
public:
    float length;
    float breadth;
    float height;

    Volume(float l,float b,float h){
        length=l;
        breadth=b;
        height=h;
    }
};

class Employee{
    string name;
    float salary;
    int hoursPerDay;
public:
    void setName(string Name){
        name=Name;
    }
    string getName(){
        return name;
    }
    void setSalary(float Salary){
        salary=Salary;
    }
    float getSalary(){
        return salary;
    }
    void setHoursPerDay(int hpd){
        hoursPerDay=hpd;
    }
    int getHoursPerDay(){
        return hoursPerDay;
    }

    Employee(string Name,float Salary,int hpd){
        name=Name;
        salary=Salary;
        hoursPerDay=hpd;
    }

    void AddSal(){
        if(salary<500){
            salary=salary+10;
        }
        cout<<salary;
    }
    void AddWork(){
        if(hoursPerDay<6){
            salary=salary+5;
        }
        cout<<salary;
    }
};

int main()
{
    Employee e1=("John",450,4);
    cout<<"\nSalary of "<<e1.name;
    e1.AddSal();
    e1.AddWork();

    return 0;
}
