#include <iostream>
using namespace std;

// Binary operator ('+') overloading using friend function

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
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    
    friend complex operator +(const complex &,const complex &);
};


complex operator + (const complex &c1,const complex &c2) // binary operator i.e '+' overaloading
{
    complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    
    return temp;
}


int main()
{
    complex c1(2,3),c2(4,5),c3,c4,c5;
    
    c3=c1+c2; // c3 = operator+(c1,c2); , here (operator+) OR (operator +) is function name 
    c3.display_data();
    
    c4=c1+c2+c3; // c4 = operator+( operator+(c1,c2) , c3 )
    c4.display_data();
    
    c5=c1+c2+c3+c4; //c5 = operator+( (operator+( operator+(c1,c2) , c3)) , c4);
    c5.display_data();
    
}


