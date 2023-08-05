#include <iostream>
using namespace std;

// Unary operator ('-') overloading 
//Note : here '-' is unary minus operator not binary subtraction operator

class complex{
    
    private:
    
    int real,imag;
    
    public:
    
    complex()
    {
        real=0;
        imag=0;
    }
    
    
   complex(int v1,int v2)
   {
       real=v1;
       imag=v2;
   }
   
    void display_data()
    {
        if(imag>0)
        cout<<real<<"+"<<imag<<"i"<<endl;
        else
        cout<<real<<imag<<"i"<<endl;
    }

   complex operator - () // unary operator i.e '-' overaloading 
     {
       real=-real;
       imag=-imag;
       return *(this);
     }
    
};

int main()
{
    complex c1(2,3),c2;

    c1.display_data();

    c2=-c1; // c2=c1.operator-(); , in case of unary operator overloading no argument is passed , as work is being done only on caller object

    c2.display_data();

    c1.display_data();
    
}