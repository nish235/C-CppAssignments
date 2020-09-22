#include<iostream>
using namespace std;

int main()
{
   int yr;
   cout<<"\n Enter The Year To Check For Leap Year : ";
   cin>>yr;
   if(((yr%4==0) && (yr%100!=0)) || (yr%400==0))
   {
       cout<<"\n\t "<<yr<<" is a leap year";
   }
   else
   {
       cout<<"\n\t "<<yr<<" is not a leap year";
   }
   cout<<"\n\n";
   return 0;
}
