#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int days,y,m,d;
	cout<<"\n Enter Number of Days : ";
	cin>>days;
	y=(int)days/365;
    days=days-(365*y);
	m=(int)days/30;
	d=(int)days-(m*30);
	cout<<"\n Year(s)  : "<<y;
	cout<<"\n Month(s) : "<<m;
	cout<<"\n Days     : "<<d;
	cout<<"\n\n\n\n";
	return 0;
}
