#include <iostream>
using namespace std;

class B; // Forward declaration of class B is necessary

class A
{
    private: 
    int a;
    
    public:
    
    void set_data(int a)
    {
        this->a=a;
    }
    
  friend void sum(A,B);  // sum function is declared as a friend of class A
};

class B
{
    
    private:
    int b;
    
    public:
    
    void set_data(int b)
    {
        this->b=b;
    }
    
  friend void sum(A,B);  // sum function is declared as a friend of class B
};


void sum(A ob1,B ob2)
{
    printf("Sum of ob1.a and ob2.b : %d",ob1.a+ob2.b); // Since sum function is a friend of both class A and B , so it can access private members of both A and B class
}

int main()
{
    A ob1;
    B ob2;
    
    ob1.set_data(10);
    ob2.set_data(20);
    sum(ob1,ob2);  // No caller object , thatswhy we pass objects
}