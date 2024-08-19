#include <iostream>

using namespace std;

class Employee{
public:
    string Name;
    int Salary;
    int noOfHours;

    Employee(string name,int salary,int no_of_hours){
        Name=name;
        Salary=salary;
        noOfHours=no_of_hours;
    }

    void calculateSalary();
};

class FullTimeEmployee:public Employee{
public:
    FullTimeEmployee(string name,int salary,int no_of_hours):Employee(name,salary,no_of_hours){};
    void calculateSalary(){
        cout<<"Salary of "<<Name<<" is "<<Salary<<endl;
    }
};

class PartTimeEmployee:public Employee{
public:
    PartTimeEmployee(string name,int salary,int no_of_hours):Employee(name,salary,no_of_hours){};
    void calculateSalary(){
        int n;
        cout<<"Enter the amount "<<Name<<" has earned per hour:"<<endl;
        cin>>n;
        Salary=n*noOfHours*4;
        cout<<"Salary of "<<Name<<" is "<<Salary<<endl;
    }
};

class ContractEmployee:public Employee{
public:
    ContractEmployee(string name,int salary,int no_of_hours):Employee(name,salary,no_of_hours){};
    void calculateSalary(){
        cout<<"Salary of "<<Name<<" is "<<Salary<<endl;
    }
};

int main()
{
    FullTimeEmployee e1=FullTimeEmployee("Kamal",60000,0);
    PartTimeEmployee e2=PartTimeEmployee("Piyal",0,20);
    ContractEmployee e3=ContractEmployee("Damith",30000,0);

    e1.calculateSalary();
    e2.calculateSalary();
    e3.calculateSalary();
    return 0;
}
