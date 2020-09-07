#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char eid[10];
	int hr;
	double temp,sal;
	cout<<"\n Enter The Employee ID : ";
	cin>>eid;
	cout<<"\n Enter The Working Hours : ";
	cin>>hr;
	cout<<"\n Enter Salary (per hour) : ";
	cin>>sal;
	temp=sal*hr;
	cout<<"\n Employees ID = "<<eid;
	cout<<"\n Salary = "<<temp<<endl;
	return 0;
}
