#include <iostream>

using namespace std;

class Employee{
public:
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
        cout<<salary<<endl;
    }
    void AddWork(){
        if(hoursPerDay<6){
            salary=salary+5;
        }
        cout<<salary<<endl;
    }
};

int main()
{
    Employee e1=Employee("John",450,4);
    cout<<"\nSalary of "<<e1.name<<endl;
    e1.AddSal();
    e1.AddWork();

    return 0;
}
