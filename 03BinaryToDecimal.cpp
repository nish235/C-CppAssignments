#include<iostream>
using namespace std;

int main()
{
    int n1,n,p=1;
	int dec=0,i=1,j,d;

	cout<<"\n Enter Binary Number : ";
	cin>>n;

	n1=n;
	for(j=n;j>0;j=j/10)
	{
        d=j%10;
        if(i==1)
        {
            p=p*1;
        }
        else
        {
            p=p*2;
        }
        dec=dec+(d*p);
        i++;
	}
    cout<<"\n Decimal Number Is : "<<dec;
    cout<<"\n\n";
    return 0;
}
