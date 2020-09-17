#include<iostream>
using namespace std;

void check(int z[], int s)
{
   int i;
   for(i=0;i<s-1;i++)
    {
        cout<<z[i]<<"  ";
    }
   cout<<z[i]<<"  ";
   cout<<"\n";
}
int main()
{
    int arr;
    int arr1[]={1, 5, 7};
    arr= sizeof(arr1)/sizeof(arr1[0]);
    cout<<"\n Original Array : ";
    check(arr1,arr);
    for(int i=0;i<arr-1;i++)
    {
        if(arr1[i]==5 && arr1[i+1]==7)
            arr1[i+1]=1;
    }
    cout<<"\n New Array : ";
    check(arr1,arr);
    cout<<"\n\n";
    return 0;
}

