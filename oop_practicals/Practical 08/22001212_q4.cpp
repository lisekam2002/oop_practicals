#include <iostream>
using namespace std;

class Temperature{
    float Celcius;
public:
    Temperature(float c):Celcius(c){};

    float getCelcius()const {
        return Celcius;
    }

    operator float() const {
        return (Celcius * 9 / 5) + 32;
    }
    
};

int main(){
    Temperature t1=Temperature(0);
    cout<<"Temperature in Celcius : "<<t1.getCelcius() <<endl;
    float t1inFahrenheit = t1.operator float();
    cout<<"Temperature in Fahrenheit : "<< t1inFahrenheit <<endl;
    return 0;
}