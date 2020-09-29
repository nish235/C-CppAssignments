#include<iostream>
using namespace std;

int main()
{
    int i, sum=0;
    cout<<"\n Numbers between 100 and 200, divisible by 9 : "<<endl<<endl;
    for(i=101;i<200;i++)
    {
        if(i%9==0)
        {
            cout<<" "<<i<<"\t";
            sum+=i;
        }
    }
    cout<<"\n\n The sum : "<<sum;
    cout<<"\n\n";
    return 0;
}
