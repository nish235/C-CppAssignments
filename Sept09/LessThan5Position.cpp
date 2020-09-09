#include<iostream>
using namespace std;
int main()
{
    float n[5];
	int i;
	cout<<"\n Enter The Array : \n";
	for(i=0;i<5;i++)
    {
        cin>>n[i];
	}
	for(i=0;i<5;i++)
	{
		if(n[i]<=5)
		{
            cout<<"\n Position : "<<i+1<<" Value : "<<n[i];
		}
	}
	cout<<"\n\n";
	return 0;
}
