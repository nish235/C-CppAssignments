#include<iostream>
using namespace std;

int check(int num[], int arr)
{
    int f=0;
    for(int i=0;i<arr;i++)
    {
        if(num[i] == 5)
        {
            if((i>0 && num[i-1]==5) || (i<arr- 1 && num[i+1]==5))
            {
                f=1;
            }
            else if(i==arr-1)
            {
                f=0;
            }
            else
                return 0;
        }
    }
    return f;
}


int main()
{
    int a;
    int arr1[]={3, 5, 5, 3, 7};
    a=sizeof(arr1)/sizeof(arr1[0]);
    cout<<"\n"<<check(arr1,a);
    int arr2[]={3, 5, 5, 4, 1, 5, 7};
    a=sizeof(arr2)/sizeof(arr2[0]);
    cout<<"\n"<<check(arr2,a);
    int arr3[]={3, 5, 5, 5, 5, 5};
    a=sizeof(arr3)/sizeof(arr3[0]);
    cout<<"\n"<<check(arr3,a);
    int arr4[]={3, 5, 5, 5, 5, 5};
    a=sizeof(arr4)/sizeof(arr4[0]);
    cout<<"\n"<<check(arr4,a);
    cout<<"\n\n";
    return 0;
}
