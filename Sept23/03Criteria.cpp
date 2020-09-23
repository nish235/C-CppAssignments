#include<iostream>
using namespace std;

int main()
{
    int p,c,m,t,mp;

    cout<<"\n Eligibility Criteria :\n";
    cout<<"\n Enter the marks obtained in Physics     : ";
    cin>>p;
    cout<<"\n Enter the marks obtained in Chemistry   : ";
    cin>>c;
    cout<<"\n Enter the marks obtained in Mathematics : ";
    cin>>m;
    cout<<"\n Total marks of Maths, Physics and Chemistry : "<<m+p+c<<endl;
    cout<<"\n Total marks of Maths and  Physics : "<<m+p<<endl;

    if(m>=65)
    {
        if(p>=55)
        {
            if(c>=50)
	        {
                if((m+p+c)>=180||(m+p)>=140)
                {
                    cout<<"\n The candidate is eligible for admission \n";
                }
                else
                {
                    cout<<"\n The candidate is not eligible \n";
                }
	        }
            else
            {
                cout<<"\n The candidate is not eligible \n";
            }
        }
        else
        {
            cout<<"\n The candidate is not eligible \n";
        }
    }
    else
    {
        cout<<"\n The candidate is not eligible \n";
    }
    cout<<"\n\n";
    return 0;
}
