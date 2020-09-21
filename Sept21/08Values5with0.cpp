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
    int a1[]={1, 2, 0, 3, 5, 7, 0, 9, 11, 5};
    a=sizeof(a1)/sizeof(a1[0]);
    cout<<"\n ORIGINAL ARRAY : ";
    print(a1,a);
    int s=a,ind=0;
    int res[s];
    for(int i=0;i<s;i++)
    {
        if(a1[i]!=5)
        {
            res[ind++]=a1[i];
        }
    }
    a=sizeof(res)/sizeof(res[0]);
    cout<<"\n NEW ARRAY : ";
    print(res,a);
    cout<<"\n\n";
    return 0;
}
