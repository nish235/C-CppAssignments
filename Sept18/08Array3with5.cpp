#include<iostream>
using namespace std;

int check(int num[], int arr)
{
    int n3=0;
    for(int i=0;i<arr;i++)
    {
        if(n3 && num[i]==5)
        {
            return 1;
        }
        if(num[i]==3)
        {
            n3=1;
        }
    }
    return 0;
}

int main()
{
    int arr;
    int arr1[]={1, 4, 6, 9, 7, 8};
    arr=sizeof(arr1)/sizeof(arr1[0]);
    cout<<"\n"<<check(arr1,arr);
    int arr2[]={1, 5, 5, 5, 10, 17};
    arr=sizeof(arr2)/sizeof(arr2[0]);
    cout<<"\n"<<check(arr2,arr);
    int arr3[]={1, 3, 3, 5, 5, 5};
    arr=sizeof(arr3)/sizeof(arr3[0]);
    cout<<"\n"<<check(arr3,arr);
    cout<<"\n\n";
    return 0;
}
