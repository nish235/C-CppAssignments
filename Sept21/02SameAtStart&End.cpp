#include<iostream>
using namespace std;

int check(int num[],int arr,int len)
{
    for (int i=0;i<len;i++)
    {
        if(num[i]!=num[arr-len+i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a;
    int arr1[]={3, 7, 5, 5, 3, 7};
    a=sizeof(arr1)/sizeof(arr1[0]);
    cout<<"\n"<<check(arr1,a,2);
    int arr2[]={3, 7, 5, 5, 3, 7};
    a=sizeof(arr2)/sizeof(arr2[0]);
    cout<<"\n"<<check(arr2,a,3);
    int arr3[]={3, 7, 5, 5, 3, 7, 5 };
    a=sizeof(arr3)/sizeof(arr3[0]);
    cout<<"\n"<<check(arr3,a,3);
    cout<<"\n\n";
    return 0;
}
