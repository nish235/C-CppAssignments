#include<iostream>
using namespace std;
void triple()
{
    int num[7],i,n;
	cout<<"\n Enter Number : ";
	cin>>n;
	for(i=0;i<7;i++)
	{
		num[i]=n;
		n=3*n;
	}
	cout<<"\n ***** OUTPUT ***** "<<endl;
	for(i=0;i<7;i++)
	{
		cout<<"\n\t"<<num[i];
	}
}
int main()
{
    triple();
    cout<<"\n\n";
	return 0;
}
