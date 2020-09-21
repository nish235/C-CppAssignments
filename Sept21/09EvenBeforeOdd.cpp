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
    int a1[]={1, 2, 5, 3, 5, 4, 6, 9, 11};
    a=sizeof(a1)/sizeof(a1[0]);
    cout<<"\n ORIGINAL ARRAY : ";
    print(a1,a);
    int s=a,ind=0;
    for(int i=0;i<s;i++)
    {
        if(a1[i]%2==0)
        {
            int t=a1[ind];
            a1[ind]=a1[i];
            a1[i]=t;
            ind++;
        }
    }
    cout<<"\n NEW ARRAY : ";
    print(a1,a);
    cout<<"\n\n";
    return 0;
}
