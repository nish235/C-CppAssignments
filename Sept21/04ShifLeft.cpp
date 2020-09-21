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
    int arr1[]={1, 2, 3, 5, 3, 7};
    a=sizeof(arr1)/sizeof(arr1[0]);
    cout<<"\n ORIGINAL ARRAY : ";
    print(arr1,a);
    int res[a];
    for(int i=0;i<a;i++)
    {
        res[i]=arr1[(i+1)%a];
    }
    cout<<"\n NEW ARRAY : ";
    print(res,a);
    cout<<"\n\n";
    return 0;
}
