#include<iostream>
#include<conio.h>
using namespace std;
void sumofnum(int a,int b)
{
    int i,sum=0;
	for(i=a;i<=b;i++)
	{
		if((i%17)!=0)
		{
			sum=sum+i;
		}
	}
	cout<<"\n SUM OF NUMBERS IS : "<<sum;
}
int main() {

	int n1,n2;
    cout<<"\n Enter 1st Number : ";
    cin>>n1;
    cout<<"\n Enter 2nd Number : ";
    cin>>n2;
    sumofnum(n1,n2);
    cout<<"\n\n";
	return 0;
}
