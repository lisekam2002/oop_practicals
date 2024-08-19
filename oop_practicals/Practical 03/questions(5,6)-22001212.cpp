#include <iostream>

using namespace std;

int main()
{
    //Question 05 - a
    int sub1,sub2,sub3,avg;
    string remark;
    cout<<"\nEnter the marks for Subject 1 : ";
    cin>>sub1;
    cout<<"\nEnter the marks for Subject 2 : ";
    cin>>sub2;
    cout<<"\nEnter the marks for Subject 3 : ";
    cin>>sub3;
    avg=(sub1+sub2+sub3)/3;
    if(avg>=70){
        cout<<"\nVery good.";
    }
    else if(70>avg>=55){
        cout<<"\nGood.";
    }
    else if(55>avg>=40){
        cout<<"\nPass.";
    }
    else if(40>avg){
        cout<<"\nFail.";
    }
    else if(avg<0){
        cout<<"\nInvalid Mark.";
    }
    cout<<"\n";
    //Question 05 - b

    avg>=70 ? remark="Very good":(70>avg>=55 ? remark="Good":
                                  (55>avg>=40 ? remark="Pass":(40>avg>=0 ? remark="Fail": remark="Invalid Mark")));
    cout<<remark;
    cout<<"\n";

    //Question 06
    int c,f,ch;
    cout<<"\nEnter your choice : 1.Convert Centigrade into Fahrenheit  2.Convert Fahrenheit into Centigrade 3.Exit  ";
    cin>>ch;
    while(ch!=3){
        if(ch==1){
        cout<<"\nEnter the temperature in Centigrade : ";
        cin>>c;
        cout<<"Temperature in Fahrenheit : "<<c*(9/5)+32;
        }
        else if(ch==2){
            cout<<"\nEnter the temperature in Fahrenheit : ";
            cin>>f;
            cout<<"Temperature in Centigrade : "<<(f-32)*5/9;
        }
        cout<<"\nEnter your choice : 1.Convert Centigrade into Fahrenheit  2.Convert Fahrenheit into Centigrade 3.Exit  ";
        cin>>ch;
    }
    cout<<"\n";
    return 0;
}
