#include<iostream>
#include<string.h>
using namespace std;
int main()
{
     char st1[20],st2[20];
     int i,res;
     cout<<"\n Enter First string : ";
     cin>>st1;
     cout<<"\n Enter Second string : ";
     cin>>st2;
     for(i=0;st1[i]==st2[i] && st1[i]=='\0';i++);
         if(st1[i]==st2[i])
         {
             cout<<"\n ***** Strings Are EQUAL ***** "<<endl;
         }
         else
         {
             cout<<"\n ***** Strings Are NOT EQUAL ***** "<<endl;
         }

     return 0;
}
