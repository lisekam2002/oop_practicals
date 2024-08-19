#include <iostream>

using namespace std;

int main()
{
    int r,c,m1[10][10],m2[10][10];
    cout<<"\nEnter the number of rows: ";
    cin>>r;
    cout<<"\nEnter the number of columns: ";
    cin>>c;
    cout<<"\nEnter the elements of the first matrix:"<<endl;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cout<<"Enter the "<<i<<","<<j<<" element of the matrix: ";
            cin>>m1[i][j];
        }
    }
    cout<<"\nFirst matrix is:"<<endl;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cout<<m1[i][j]<<"\t";
        }
        cout<<"\n";
    }

    cout<<"\nEnter the elements of the second matrix:"<<endl;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cout<<"Enter the "<<i<<","<<j<<" element of the matrix: ";
            cin>>m2[i][j];
        }
    }
    cout<<"\nSecond matrix is:"<<endl;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cout<<m2[i][j]<<"\t";
        }
        cout<<"\n";
    }

    cout<<"\nSum of the matrices : "<<endl;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cout<<m1[i][j]+m2[i][j]<<"\t";
        }
        cout<<"\n";
    }

    return 0;
}
