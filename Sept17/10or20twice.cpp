#include<iostream>
using namespace std;

int check(int n[], int s)
{
    return s==2 &&((n[0]==10 && n[1]==10) || (n[0]==20 && n[1]==20));
}
int main()
{
    int arr;
    int arr1[]={12, 20};
    arr=sizeof(arr1)/sizeof(arr1[0]);
    cout<<"\n"<<check(arr1,arr);
    int arr2[]={20, 20};
    arr=sizeof(arr2)/sizeof(arr2[0]);
    cout<<"\n"<<check(arr1,arr);
    int arr3[]={10};
    arr=sizeof(arr3)/sizeof(arr3[0]);
    cout<<"\n"<<check(arr1,arr);
    cout<<"\n\n";
    return 0;
}

