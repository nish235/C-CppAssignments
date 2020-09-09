#include<iostream>
#include<conio.h>
using namespace std;
void neg()
{
    int num[7],i,j;
	cout<<"\n Enter Numbers : \n";
	for(i=0;i<7;i++)
	{
		cin>>j;
		if(j>0)
		{
            num[i]=j;
		}
		else
        {
			num[i]=100;
		}
	}
	cout<<"\n OUTPUT : \n";
	for(i=0;i<7;i++)
    {
		cout<<"\n"<<i<<" =====> "<<num[i];
	}
}
int main()
{
    neg();
    cout<<"\n\n";
	return 0;
}
