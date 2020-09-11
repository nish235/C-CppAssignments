#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"\n Enter The Number : ";
    cin>>n;
    for(i=1;i<=10;i++)
    {
        cout<<"\t "<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    cout<<"\n\n";
    return 0;
}
