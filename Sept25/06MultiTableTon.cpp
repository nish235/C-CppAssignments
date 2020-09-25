#include<iostream>
using namespace std;

int main()
{
    int j,i,n;
    cout<<"\n Input up to the table number starting from 1 : ";
    cin>>n;
    cout<<"\n Multiplication table from 1 to "<<n<<endl;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=n-1)
            {
                cout<<"\t"<<j<<" x "<<i<<" = "<<j*i;
            }

            else
            {
                cout<<"\t"<<j<<" x "<<i<<" = "<<j*i;
            }


        }
        cout<<"\n";
    }
    return 0;
}
