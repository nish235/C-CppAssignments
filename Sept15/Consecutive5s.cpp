#include<iostream>
using namespace std;
int opt(int num[],int a)
{
    int ctr = 0;
    for (int i = 0; i < a-1; i++)
    {
        if (num[i] == 5 && (num[i + 1] == 5 || num[i + 1] == 6))
            ctr++;
    }
    return ctr;
}

int main()
{
    int a;
    int arr1[] = {5, 5, 2 };
    a = sizeof(arr1)/sizeof(arr1[0]);
    cout<<"\n"<<opt(arr1, a);
    int arr2[] = {5, 5, 2, 5, 5 };
    a = sizeof(arr2)/sizeof(arr2[0]);
    cout<<"\n"<<opt(arr2, a);
    int arr3[] = {5, 6, 2, 9 };
    a = sizeof(arr3)/sizeof(arr3[0]);
    cout<<"\n"<<opt(arr3, a);
}
