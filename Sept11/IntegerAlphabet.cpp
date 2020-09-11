#include<iostream>
using namespace std;
 #define N 10
int main()
{
    int i=64;
    char ch;
    cout<<"\n";
    for(ch=65;ch<=122;ch++)
    {
        i++;
        if(ch>90 && ch<97)
            continue;
        cout<<i<<"="<<ch<<"\t";
    }
  return 0;
}
