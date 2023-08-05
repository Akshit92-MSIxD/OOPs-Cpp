
// It can be done using 'overloadled casting operator' or 'conversion function'
// must be a member of a class , no arguments , not specify return type

#include <iostream>
using namespace std;

class hours
{
    int hrs;

    public :

    hours(int t)
    {
        hrs=t/60;
    }

    operator float()
    {
        return float(hrs);
    }

    void display()
    {
        cout<<"Hours : "<<hrs;
    }
};

int main()
{
    hours  h1(120);

    float f=h1;

    cout<<f;

}