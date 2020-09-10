#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int i,n,c;
  for(n=1;n<=200;n++)
  {
    c=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            c++;
            break;
        }
    }
    if(c==0 && n!=1 )
    {
        cout<<n<<"\t";
    }
  }
  return 0;
}
