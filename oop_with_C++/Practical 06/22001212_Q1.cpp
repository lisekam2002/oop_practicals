#include <iostream>

using namespace std;

int main()
{
    //Question No 1
    int n,sum=0,sum1=0;
    cout<<"\nEnter the value for n to get sum of the positive integers :";
    cin>>n;
    while(n>0){
        sum=sum+n;
        n--;
    }
    cout<<"\nSum is :"<<sum<<endl;

    cout<<"\nEnter the value for n to get sum of the positive integers :";
    cin>>n;
    do{
        sum1=sum1+n;
        n--;
    }while(n>0);
    cout<<"\nSum is :"<<sum1<<endl;


    return 0;
}
