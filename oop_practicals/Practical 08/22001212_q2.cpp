#include <iostream>

using namespace std;

class Integer{
public:
    int number;

    Integer(int n){
        number=n;
    }

    int operator - (){
        number= (-number);
        return number;
    }

    void printValue(){
        if(number>0){
            cout<<"Current valu of the number is : "<<number<<endl;
        }
        else{
            cout<<"Value after the negation is : "<<number<<endl;
        }
    }
    
};

int main(){
    Integer i1=Integer(5);
    i1.printValue();
    i1.operator- ();
    i1.printValue();
    return 0;
}