#include <iostream>
using namespace std;

class complex;

class calculator
{
    public:
    
    complex sum_com(complex,complex);
};

class complex{
    
    private :
    int real,img;
    
    public :
    
    void set_data(int v1,int v2)
    {
        real=v1;
        img=v2;
    }
    
    void display_data()
    {
        cout<<"Complex no. : "<<real<<"+"<<img<<"i"<<endl;
    }

    //Instead of doing this for every member function of calculator class, we can make whole calculator class a friend of class complex
    // By writing (friend class calculator) , but only when more no. of member functions are supposed to access the private data of complex class

    friend complex calculator::sum_com(complex,complex); // memeber function sum_com() of calculator class is declared as a friend of class complex
};


complex calculator::sum_com(complex c1,complex c2)
{
    complex c3;
    c3.real=c1.real+c2.real;
    c3.img=c1.img+c2.img;
    
return c3;
}

int main()
{
    complex c1,c2,c3;
    calculator cal;
    
    c1.set_data(3,4);
    c1.display_data();
    
    c2.set_data(4,5);
    c2.display_data();
    
    c3=cal.sum_com(c1,c2); // Here caller object is used to call friend function , since the friend function is a member function of class calculator

    cout<<"Sum of above two complex no. is : ";
    c3.display_data();
    
}