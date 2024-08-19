#include <iostream>

using namespace std;

int main()
{
    int arr[3];
    cout<<"Enter 3 numbers:";
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    int max=arr[0];
   for(int i=0;i<3;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
    }
    cout<<"The maximum number is :"<<max;

    return 0;
}
