#include<iostream>
 using namespace std;

class one
{
    static int Number;
    int n;
    public:

    void set_n()
    {

        n = ++Number;
    }

    void show_n()
    {

        cout<<"value of n = "<<n<<endl;
    }

    static void show_Number()
    {

        cout<<"value of Number = "<<Number<<endl;
    }


};

int one:: Number;

int main()
{
    one ex1, ex2;

    ex1.set_n();
    ex2.set_n();

    ex1.show_n();
    ex2.show_n();

    one::show_Number();

    return 0;
}
