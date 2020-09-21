#include<iostream>
using namespace std;

void print(int p[],int s)
{
    int i;
    for(i=0;i<s-1;i++)
    {
        cout<<" "<<p[i];
    }
    cout<<" "<<p[i];
    cout<<"\n";
}

int main()
{
    int a;
    int a1[]={1, 2, 0, 3, 5, 7, 0, 9, 11};
    a=sizeof(a1)/sizeof(a1[0]);
    cout<<"\n ORIGINAL ARRAY : ";
    print(a1,a);
    int pos=0;
    for(int i=0;i<a;i++)
    {
        if(a1[i]==0)
        {
            a1[i]=a1[pos];
            a1[pos++]=0;
        }
    }
    a=sizeof(a1)/sizeof(a1[0]);
    cout<<"\n NEW ARRAY : ";
    print(a1,a);
    cout<<"\n\n";
    return 0;
}
