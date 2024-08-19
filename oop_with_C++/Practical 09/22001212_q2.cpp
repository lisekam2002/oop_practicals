#include <iostream>
#include <list>

using namespace std;

class Marks{
public:
    int rollNo;
    string Name;
    int Marks;
};

class Database:public Marks{
 public:
    Database(int db){
        Marks=db;
    }
};

class Statistics:public Marks{
public:
    Statistics(int s){
        Marks=s;
    }
    
};

class Data_Structures:public Marks{
public:
    Data_Structures(int d){
        Marks=d;
    } 
};

int main()
{
    int n;
    Marks students[10];
    cout<<"Enter the number of students :"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        students[i].rollNo=i;
        string name;
        cout<<"Enter the name of the student :";
        cin>>name;
        students[i].Name=name;
        int ds,db,s;
        cout<<"\nEnter the marks for Data Structures :";
        cin>>ds;
        cout<<"Enter the marks for Database :";
        cin>>db;
        cout<<"Enter the marks for Statistics :";
        cin>>s;
        Data_Structures DS=Data_Structures(ds);
        Database DB=Database(db);
        Statistics S=Statistics(s);
        cout<<"Total of the student "<<students[i].rollNo<<endl;
        int sum= DB.Marks+S.Marks+DS.Marks;
        cout<<sum<<endl;
        cout<<"Average of the student "<<students[i].rollNo<<endl;
        int avg=sum/3;
        cout<<avg<<endl;

    }
    return 0;
}
