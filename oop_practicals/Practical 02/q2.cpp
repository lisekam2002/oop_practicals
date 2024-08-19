#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"\nEnter the value of a :";
    cin>>a;
    cout<<"\n........................";
    cout<<"\nThe value of ++a is:"<<++a;
    cout<<"\nNow the value of a is:"<<a;
    cout<<"\n........................";
    cout<<"\nThe value of a++ is:"<<a++;
    cout<<"\nNow the value of a is:"<<a;
    cout<<"\n........................";
    cout<<"\nThe value of --a is:"<<--a;
    cout<<"\nNow the value of a is:"<<a;
    cout<<"\n........................";
    cout<<"\nThe value of a-- is:"<<a--;
    cout<<"\nNow the value of a is:"<<a;
    return 0;
}
