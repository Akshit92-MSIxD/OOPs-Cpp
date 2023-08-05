
// It can be done by using constructors

#include <iostream>
using namespace std;


class hours
{
    private :
    int hrs;

    public :

    hours()
    {
        hrs=0;
    }

    hours(int t)
    {
       hrs=t;
    }

    void display()
    {
        printf("%d\n",hrs);
    }
};

int main()
{
    hours h1; 
    h1=120; // 120 will be taken as a argument to the constructor , integer 120 is converted into object of class hours
    
    h1.display(); // output : 2 , C++ mai bydefault 0 ni dikhata float or double mai  point ke baad
}