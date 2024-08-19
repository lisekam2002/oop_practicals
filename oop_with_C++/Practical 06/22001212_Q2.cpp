#include <iostream>

using namespace std;

class Complex{
public:
    int realPart;
    int imaginaryPart;

    Complex(int r,int i){
        realPart=r;
        imaginaryPart=i;
    }

    void addComplex(Complex c1,Complex c2){
        int r,i;
        r=c1.realPart+c2.realPart;
        i=c1.imaginaryPart+c2.imaginaryPart;
        cout<<"\nSum of the two complex numbers is: "<<r<<" + "<<i<<"i";
    }

    void substractComplex(Complex c1,Complex c2){
        int r,i;
        r=c1.realPart-c2.realPart;
        i=c1.imaginaryPart-c2.imaginaryPart;
        cout<<"\nDifference of the two complex numbers is: "<<r<<" + "<<i<<"i";
    }

    void multiplyComplex(Complex c1,Complex c2){
        int r,i;
        r=c1.realPart*c2.realPart;
        i=(c1.imaginaryPart*c2.imaginaryPart)*(-1);
        cout<<"\nProduct of the two complex numbers is: "<<r<<" + "<<(c1.realPart*c2.imaginaryPart)+(c1.imaginaryPart*c2.realPart)<<"i"<<" + "<<i;
    }
};

int main()
{
    int r1,i1,r2,i2;
    cout<<"\nEnter the real part of the first complex number: ";
    cin>>r1;
    cout<<"\nEnter the imaginary part of the first complex number: ";
    cin>>i1;
    cout<<"\nEnter the real part of the first complex number: ";
    cin>>r2;
    cout<<"\nEnter the imaginary part of the first complex number: ";
    cin>>i2;
    Complex C1=Complex(r1,i1);
    Complex C2=Complex(r2,i2);
    Complex C3=Complex(0,0);
    C3.addComplex(C1,C2);
    C3.substractComplex(C1,C2);
    C3.multiplyComplex(C1,C2);
    cout<<"\n";
    return 0;
}
