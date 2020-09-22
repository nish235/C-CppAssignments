#include<iostream>
using namespace std;

int check(int num[], int arr)
{
    for(int i=0;i<arr-1;i++)
    {
        if(num[i+1]==num[i] && num[i]==15)
        {
            return 1;
        }
    }
    return 0;
}


int main()
{
    int a;
    int arr1[]={5, 5, 1, 15, 15};
    a=sizeof(arr1)/sizeof(arr1[0]);
    cout<<"\n"<<check(arr1,a);
    int arr2[]={15, 2, 3, 4, 15};
    a=sizeof(arr2)/sizeof(arr2[0]);
    cout<<"\n"<<check(arr2,a);
    int arr3[]={3, 3, 15, 15, 5, 5};
    a=sizeof(arr3)/sizeof(arr3[0]);
    cout<<"\n"<<check(arr3,a);
    int arr4[]={3, 15, 15, 15, 15, 5};
    a=sizeof(arr4)/sizeof(arr4[0]);
    cout<<"\n"<<check(arr4,a);
    cout<<"\n\n";
    return 0;
}
