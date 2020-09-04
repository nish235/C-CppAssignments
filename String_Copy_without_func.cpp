#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    char st1[10],st2[10];
    int i;
    cout<<"\n Enter String S1 : ";
    cin>>st1;
    for(i=0;st1[i]!='\0';i++)
    {
        st2[i]=st1[i];
    }
    cout<<"\n Copied String S2 : "<<st2<<endl;
    return 0;
}
