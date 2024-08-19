#include <iostream>

using namespace std;

int main()
{
    //Question 01
    int num;
    cout<<"\nEnter the value : ";
    cin>>num;
    cout<<"\nThe absolute value is :";
    if(num<0){
        cout<<0-num;
    }
    else{
        cout<<num-0;
    }
    cout<<"\n";

    //Question 02
    int n;
    cout<<"\nEnter the number : ";
    cin>>n;
    cout<<n<<" is ";
    if(n%2==0){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
    cout<<"\n";

    //Question 03
    int arr[3],largest;
    cout<<"\nEnter three numbers : ";
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    cout<<"\nThe numbers are : ";
    for(int i=0;i<3;i++){
        cout<<arr[i]<<",";
    }
    largest=arr[0];
    for(int i=0;i<3;i++){
        if(arr[i]>=largest){
            largest=arr[i];
        }
    }
    cout<<"\nThe largest number is : "<<largest;
    cout<<"\n";

    //Question 03 - a
    int x,y,z,mid;
    cout<<"\nEnter value for x : ";
    cin>>x;
    cout<<"\nEnter value for y : ";
    cin>>y;
    cout<<"\nEnter value for z : ";
    cin>>z;

    if(x<y && y<z || z<y && y<x){
        mid=y;
    }
    else if(y<z && z<x || x<z && z<y){
        mid=z;
    }
    if(y<x && x<z || z<x && x<y){
        mid=x;
    }
    cout<<"\nThe middle number is : "<<mid;
    cout<<"\n";

    //Question 03 - b
    mid=(x < y) ? ((y < z) ? y : ((x < z) ? z : x)) : ((x < z) ? x : ((y < z) ? z : y));
    cout<<"\nThe middle number is : "<<mid;
    cout<<"\n";

    //Question 04
    int temperature;
    cout<<"\nEnter the temperature: ";
    cin>>temperature;
    if(temperature<50){
        if(temperature<30){
            cout<<"\nWear the down jacket 1";
        }
        else{
            cout<<"\nNo need to worry about the jacket";
        }
    }
    else{
        cout<<"\nYou have entered an invalid temperature.";
    }

    return 0;
}
