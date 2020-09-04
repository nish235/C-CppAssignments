#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main() {
  	char st[10];
  	int i,len=0;
  	cout<<"\n Enter the String : ";
  	cin>>st;
	for(i=0;st[i]!='\0';i++)
	{
	    len++;
	}
  	cout<<"\n Reverse String Is : ";
  	for(;len>=0;len--)
    {
        cout<<st[len];
    }
  	return 0;
}
