#include <iostream>

using namespace std;

int main()
{
    int arr[10],temp;
    cout<<"\nEnter the numbers:"<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"\nNumbers in ascending order:";
    for(int i=0;i<10;i++){
        cout<<arr[i]<<",";
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
     cout<<"\nNumbers in descending order:";
    for(int i=0;i<10;i++){
        cout<<arr[i]<<",";
    }
    return 0;
}
