#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b,c,d;
    float x1,x2;

    cout<<"\n Enter a : ";
    cin>>a;
    cout<<"\n Enter b : ";
    cin>>b;
    cout<<"\n Enter c : ";
    cin>>c;
    d=b*b-4*a*c;
    if(d==0)
    {
        cout<<"\n Both roots are equal. \n";
        x1=-b/(2.0*a);
        x2=x1;
        cout<<"\n First  Root = "<<x1;
        cout<<"\n Second Root = "<<x2;
    }
    else if(d>0)
    {
        cout<<"\n Both roots are real and different \n";
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        cout<<"\n First  Root = "<<x1;
        cout<<"\n Second Root = "<<x2;
	}
	else
    {
        cout<<"\n Root are Imaginary \n No Solution. ";
    }
    cout<<"\n\n";
    return 0;
}
