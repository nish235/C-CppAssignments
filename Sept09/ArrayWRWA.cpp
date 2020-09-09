#include<iostream>
#include<conio.h>
using namespace std;
float avrg(int arr[], int n)
{
    int i;
    float avg,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/n;
    return avg;
}
int main()
{
    int num[5];

    cout<<"\n Enter 5 Numbers : ";
    for(int j=0;j<5;j++)
    {
        cin>>num[j];
    }
    float a=avrg(num,5);
    cout<<"\n Average Is : "<<a;
    cout<<"\n\n";
    return 0;
}
