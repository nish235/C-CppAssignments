#include<iostream>
using namespace std;

int check(int num[],int arr)
{
    for(int i=0;i<arr-1;i++)
    {
        if(num[i]==5 && num[i]==num[i+1])
        {
            cout<<"\n";
            return 1;
        }
    }
    return 0;
}


int main()
{
    int arr;
    int arr1[]={1, 5, 6, 9, 10, 17};
    arr= sizeof(arr1)/sizeof(arr1[0]);
    cout<<check(arr1,arr);
    int arr2[]={1, 5, 5, 9, 10, 17};
    arr= sizeof(arr2)/sizeof(arr2[0]);
    cout<<check(arr2,arr);
    int arr3[]={1, 5, 5, 9, 10, 17, 5, 5};
    arr= sizeof(arr3)/sizeof(arr3[0]);
    cout<<check(arr3,arr);
    cout<<"\n\n";
    return 0;
}