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
  		if(st[i]>='A'&&st[i]<='Z')
  		{
  			st[i]=st[i]+32;
		}
  	}
    cout<<"\n Given String In Lowercase : "<<st;
  	return 0;
}
