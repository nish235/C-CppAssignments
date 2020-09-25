#include<iostream>
using namespace std;

int main()
{
    int i,n,sum=0;
	float avg;
	cout<<"\n Enter The 10 Numbers : ";
	for(i=1;i<=10;i++)
	{
        cout<<"\n Number "<<i<<" : ";
        cin>>n;
		sum=sum+n;
	}
	avg=sum/10.0;
	cout<<"\n The Sum of 10 no is : "<<sum;
	cout<<"\n The Average is      : "<<avg;
    cout<<"\n\n";
    return 0;
}
