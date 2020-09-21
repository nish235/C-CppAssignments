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
    int a1[]={1, 2, 3, 4, 5, 6, 7};
    a=sizeof(a1)/sizeof(a1[0]);
    cout<<"\n ORIGINAL ARRAY : ";
    print(a1,a);
    int s=0;
    int pre[a];
    for(int i=0;i<a;i++)
    {
        if(a1[i]==5)
        {
            s=i;
            break;
        }
    }
    int res[s];
    for(int j=0;j<s;j++)
    {
        res[j]=a1[j];
    }
    a=sizeof(res)/sizeof(res[0]);
    cout<<"\n NEW ARRAY : ";
    print(res,a);
    cout<<"\n\n";
    return 0;
}
