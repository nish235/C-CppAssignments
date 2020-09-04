#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  	char st[10];
  	int i;
    cout<<"\n Enter The String :  ";
  	cin>>st;
  	for(i=0;st[i]!='\0';i++)
  	{
  		if(st[i]>='a'&&st[i]<='z')
  		{
  			st[i]=st[i]-32;
		}
  	}
    cout<<"\n Given String In Uppercase : "<<st;
  	return 0;
}
