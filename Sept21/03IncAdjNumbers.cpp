#include<iostream>
using namespace std;

int check(int num[], int arr)
{
    for(int i=0;i<=arr-3;i++)
    {
        if(num[i]==num[i+1]-1 && num[i]==num[i+2]-2)
        {
            return 1;
        }
    }
    return 0;
}


int main()
{
    int a;
    int arr1[]={1, 2, 3, 5, 3, 7};
    a=sizeof(arr1)/sizeof(arr1[0]);
    cout<<"\n"<<check(arr1,a);
    int arr2[]={3, 7, 5, 5, 3, 7 };
    a=sizeof(arr2)/sizeof(arr2[0]);
    cout<<"\n"<<check(arr2,a);
    int arr3[]={3, 7, 5, 5, 6, 7, 5};
    a=sizeof(arr3)/sizeof(arr3[0]);
    cout<<"\n"<<check(arr3,a);
    cout<<"\n\n";
    return 0;
}
