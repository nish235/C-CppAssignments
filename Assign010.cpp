#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    double a,b,c,x,y,des;
	cout<<"\n Enter a : ";
    cin>>a;
    cout<<"\n Enter b : ";
    cin>>b;
    cout<<"\n Enter c : ";
    cin>>c;
	des=(b*b)-(4*(a)*(c));
    if(des>0 && a!=0)
    {
        des=sqrt(des);
		x=(-b+des)/(2*a);
		y=(-b-des)/(2*a);
		cout<<"\n Root 1 = "<<x;
		cout<<"\n Root 2 = "<<y;
	}
	else
	 {
		cout<<"\n NO ROOTS ";
	}
    cout<<"\n\n\n\n";
	return 0;
}
