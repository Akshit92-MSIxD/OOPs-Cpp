#include <iostream>
using namespace std;

class Complex
{
    int real , imag;

    public:

    void setdata(int v1,int v2)
    {
        real=v1;
        imag=v2;
    }

    void add_ob(Complex ob1, Complex ob2)
    {
        real=ob1.real + ob2.real;
        imag=ob1.imag + ob2.imag;
    }

    void get_c()
    {
        cout<<"Complex no. is : "<<real<<" + "<<imag<<"i"<<"\n\n";
    }


};

int main()
{

Complex c1,c2,c3;

c1.setdata(1,2);
c1.get_c();

c2.setdata(3,4);
c2.get_c();

c3.add_ob(c1,c2);
c3.get_c();


}

