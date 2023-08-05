#include <iostream>
using namespace std;

class integer
{
    int a,b;
    
    public:
    
    integer() // Default Constructor
    {
        printf("\nDefault constructor called!!!\n");
        a=0;
        b=0;
    }
    
    integer(int a,int b) //Parameterized Constructor
    {
        printf("\nParameterized constructor called!!!\n");
        this->a=a;
        this->b=b;
    }
    
    integer(const integer &ob) // Copy constructor , Agar hum nahi banaenge to compiler apne aapse Default copy constructor provide krega
    {
        printf("\ncopy constructor called!!!\n");
        a=ob.a;
        b=ob.b;
    }

    void change_value(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    
    void print()
    {
        printf("%d %d\n",a,b);
    }
    
};

int main()
{
    integer ob1,ob2(3,4),ob3(ob2),ob4=ob2,ob5;
    ob5=ob2; // No copy constructor will be called in this case , assignment operator will be called !!!
    
    ob1.print();
    ob2.print();
    ob3.print();
    ob4.print();
    ob5.print();

 
    
    return 0;
    
}