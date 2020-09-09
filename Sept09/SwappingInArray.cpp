#include<iostream>
using namespace std;
int main()

{
	int n[6],i;
    for(i=0;i<6;i++)
	{
		cout<<"Enter element "<<i+1<<":";
		cin>>n[i];
	}
	cout<<"\n Array after swapping "<<endl;
	for(i=5;i>=0;i--)
    {
        cout<<"\n\t"<<n[i];
    }
    cout<<"\n\n";
    return 0;
}
