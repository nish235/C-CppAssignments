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
    int l=a;
    int i=l-1;
    while(i>=0 && a1[i]!=5)
    {
        i--;
    }
    i++;
    s=l-i;
    int post[s];
    for(int j=0;j<s;j++)
    {
          post[j]=a1[i+j];
    }
    a=sizeof(post)/sizeof(post[0]);
    cout<<"\n NEW ARRAY : ";
    print(post,a);
}
