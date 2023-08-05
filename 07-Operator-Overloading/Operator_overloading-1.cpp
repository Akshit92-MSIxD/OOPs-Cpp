#include <iostream>
using namespace std;

// Binary operaor ('+') overloading 

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

   complex operator +(complex c2) // binary operator i.e '+' overaloading 
     {
    complex temp;
    temp.real = real + c2.real;
    temp.imag = imag + c2.imag;
    
    return temp;
     }
    
};


int main()
{
    complex c1(2,3),c2(4,5),c3;
    
    c3=c1.operator+(c2);  // or  c3=c1.operator +(c2);  , gap is also allowed (here operator+ is used as a function)
    c3.display_data();

    // OR

    c3=c1+c2; // we can write  (+) in place of (.operator+)
    c3.display_data();


// _______________________________________________________________________________________________________________________________________________________________________________________________


    complex c4;
    c4=c1+c2+c3; // c4 = ((c1.operator+(c2)).operator+(c3)) (Actually mai ye ho raha hai)


    c4.display_data();


    
}