#include <iostream>
using namespace std;

int main()
{
    float c,k,f;
    cout<<"\n Enter The Temperature in Celsius : ";
    cin>>c;
    f=(c*1.8)+32;
    k=(c+273.15);
    cout<<"\n The temperature in Celsius    : "<<c<<"C"<<endl;
    cout<<"\n The temperature in Fahrenheit : "<<f<<"F"<<endl;
    cout<<"\n The temperature in Kelvin     : "<<k<<"K"<<endl;
	cout<<"\n\n";
    return 0;
}
