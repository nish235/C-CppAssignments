#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a;
	float b,avg;
	cout<<"\n Enter Distance in km : ";
	cin>>a;
	cout<<"\n Enter Fuel Spent in liters : ";
	cin>>b;
	avg=a/b;
	cout<<"\n Average of Bike : "<<avg<<endl;
	return 0;
}
