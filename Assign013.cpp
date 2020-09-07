#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float a,b,c,peri;
    cout<<"\n Enter Side a : ";
    cin>>a;
    cout<<"\n Enter Side b : ";
    cin>>b;
    cout<<"\n Enter Side c : ";
    cin>>c;
    if(a<(b+c) && b<(a+c) && c<(b+a))
     {
	 peri=a+b+c;
	 cout<<"\n\n\n PERIMETER OF TRIANGLE  = "<<peri;

    }
    else
    {
    	cout<<"\n***** TRIANGLE CAN'T BE CREATED *****";
	}
	cout<<"\n\n\n\n";
	return 0;
}
