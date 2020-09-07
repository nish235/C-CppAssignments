#include<iostream>
using namespace std;
int main()
{
    int num[5],i,p=0;
    float sum=0,avg;
	cout<<"\n Enter The First Number  : ";
	cin>>num[0];
	cout<<"\n Enter The Second Number : ";
	cin>>num[1];
	cout<<"\n Enter The Third Number  : ";
	cin>>num[2];
	cout<<"\n Enter The Fourth Number : ";
	cin>>num[3];
	cout<<"\n Enter The Fifth Number  : ";
	cin>>num[4];
	for(i=0;i<5;i++)
    {
		if(num[i]>0)
		{
			p++;
			sum=sum+num[i];
		}
	}
	avg=sum/p;
	cout<<"\n Number of POSITIVE numbers: "<<p<<endl;
	cout<<"\n AVERAGE of POSITIVE numbers: "<<avg<<endl;
	cout<<"\n\n";
	return 0;
}
