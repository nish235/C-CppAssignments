#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int tim,h,m,s;
	cout<<"\n Enter Time : ";
	cin>>tim;
	h=(tim/3600);
	m=(tim-(3600*h))/60;
	s=(tim-(3600*h)-(m*60));
	cout<<"\n Hours   : "<<h;
	cout<<"\n Minutes : "<<m;
	cout<<"\n Seconds : "<<s;
	cout<<"\n\n\n\n";
	return 0;
}
