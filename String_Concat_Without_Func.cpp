#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char s1[10],s2[10],s3[20];
    int i,j=0;
    cout<<"\n Enter First String : ";
    cin>>s1;
    cout<<"\n Enter Second String : ";
    cin>>s2;
    for(i=0;s1[i]!='\0';i++)
    {
        s3[j]=s1[i];
        j++;
    }
    for(int i=0;s2[i]!='\0';i++)
    {
        s3[j]=s2[i];
        j++;
    }
    s3[j]='\0';
    cout<<"\n After Concatenation : "<<s3<<endl;

    return 0;
}
