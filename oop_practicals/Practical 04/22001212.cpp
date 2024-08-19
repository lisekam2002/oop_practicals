#include <iostream>

using namespace std;

int main()
{
    //Question 01
    int n,sum=0;
    cout<<"\nEnter the value for n :";
    cin>>n;
    for(int i=1;i<n+1;i++){
        sum=sum+i;
    }
    cout<<"The Sum of the first n Natural Numbers is :"<<sum<<endl;

    //Question 02
    cout<<"\n***Multiplication table up to 10***\n";
    for(int i=1;i<11;i++){
        for(int j=1;j<11;j++){
            cout<<j*i<<"\t";
        }
        cout<<"\n";
    }

    //Question 03

    cout<<"\nHalf pyramid using *\n"<<endl;

    for(int i=1;i<6;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }

    //Question 04

    cout<<"\nHalf pyramid using numbers\n"<<endl;

    for(int i=1;i<6;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<"\n";
    }


    return 0;
}
