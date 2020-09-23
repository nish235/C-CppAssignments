#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"\n Enter The Alphabet : ";
    cin>>ch;

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        cout<<"\n Its a VOWEL ";
    }

    else
    {
        cout<<"\n Its a CONSONANT ";
    }
    cout<<"\n\n";
    return 0;
}
