#include <iostream>

using namespace std;

void reverseArray(int a[],int s){
    for(int i=s;i>0;i--){
        cout<<a[i]<<",";
    }
}

int main()
{
    int n;
    int arr[n];
    cout<<"\nEnter the size of the array : ";
    cin>>n;
    cout<<"\nEnter the numbers:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nArray in reverse order";
    reverseArray(arr,n);
    return 0;
}
