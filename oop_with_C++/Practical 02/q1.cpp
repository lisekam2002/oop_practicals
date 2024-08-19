#include <iostream>

using namespace std;

int main()
{
    int arr[5];
    cout<<"\nEnter the numbers:"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"\nValues in forward order:";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<",";
    }
    cout<<"\nValues in reverse order:";
    for(int i=4;i>=0;i--){
        cout<<arr[i]<<",";
    }
    return 0;
}
