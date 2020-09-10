#include<iostream>
using namespace std;
int main()

{
	int n[50],i,c,num;
	cout<<"\n Enter The Number : ";
	cin>>num;
    for(i=0;i<num;i++)
	{
		cout<<"\n Enter element "<<i+1<<":";
		cin>>n[i];
	}
	cout<<"\n Array after swapping "<<endl;
	for(i=0;i<num/2;i++)
    {
			c=n[i];
			n[i]=n[num-(i+1)];
			n[num-(i+1)]=c;
	}
	for(i=0;i<num;i++)
    {
		cout<<"\n ARRAY AT "<<i+1<<" = "<<n[i];
	}
    cout<<"\n\n";
    return 0;
}
