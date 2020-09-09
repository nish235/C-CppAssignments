#include<iostream>
using namespace std;
int main()
{
	int n[6],i,sm,pos=0;
    cout<<"\n Enter Array : "<<endl;
	for(i=0;i<6;i++)
    {
        cin>>n[i];
	}
	sm=n[0];
	for(i=0;i<6;i++)
	{
		if(sm>n[i])
        {
			sm=n[i];
			pos=i+1;
		}
	}
    cout<<"\n Smallest Value : "<<sm<<endl;
	cout<<"\n Position of the element : "<<pos<<endl;
	cout<<"\n\n";
	return 0;
}
