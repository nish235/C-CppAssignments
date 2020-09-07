#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,tot;
	cout<<"\n Enter the amount : ";
	cin>>n;
	tot=(int)n/100;
	cout<<"\n Distribution Of Notes Is As : "<<endl;
	cout<<"\n 100 x : "<<tot;
	n=n-(tot*100);
	tot=(int)n/50;
	cout<<"\n  50 x : "<<tot;
	n=n-(tot*50);
	tot=(int)n/20;
	cout<<"\n  20 x : "<<tot;
	n=n-(tot*20);
	tot=(int)n/10;
	cout<<"\n  10 x : "<<tot;
	n=n-(tot*10);
	tot=(int)n/5;
	cout<<"\n   5 x : "<<tot;
	n=n-(tot*5);
	tot=(int)n/2;
	cout<<"\n   2 x : "<<tot;
    n=n-(tot*2);
	tot=(int)n/1;
	cout<<"\n   1 x : "<<tot;
	cout<<"\n\n\n\n";
	return 0;
}
