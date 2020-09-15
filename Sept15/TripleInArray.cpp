#include<iostream>
using namespace std;
int opt(int num[], int a)
{
    for(int i = 0; i < a - 1; i++)
    {
        if(num[i] == num[i + 1] && num[i + 2] == num[i])
            return 1;
    }
    return 0;
}

int main()
{
    int a;
    int arr1[] = {1, 1, 2, 2, 1};
    a = sizeof(arr1)/sizeof(arr1[0]);
    cout<<"\n"<<opt(arr1, a);
    int arr2[] = {1, 1, 2, 1, 2, 3};
    a = sizeof(arr2)/sizeof(arr2[0]);
    cout<<"\n"<<opt(arr2, a);
    int arr3[] = {1, 1, 1, 2, 2, 2, 1 };
    a = sizeof(arr3)/sizeof(arr3[0]);
    cout<<"\n"<<opt(arr3, a);
    cout<<"\n\n";
    return 0;
}
