#include <iostream>
using namespace std;
// Program to swap two objects data using call by reference in C++

class Y;

class X
{
    private: 

    int num1;
    friend void swap(X &,Y &); // refrence object as parameter

    public: 

    void setdata(int v1)
    {
        num1=v1;
    }

    void display(void)
    {
        cout<<"Value of object of class X is : "<<num1<<endl;
    }

};


class Y
{
    private: 

    int num2;
    friend void swap(X &,Y &);

    public: 

    void setdata(int v2)
    {
        num2=v2;
    }

    void display(void)
    {
        cout<<"Value of object of class Y is : "<<num2<<endl;
    }

};

void swap(X &obX , Y &obY) // refrence objects as parameters 
{
    int temp=obX.num1;
    obX.num1=obY.num2;
    obY.num2=temp;
    return;
}

int main()
{
    X ob1;
    ob1.setdata(10);
    ob1.display();

    Y ob2;
    ob2.setdata(20);
    ob2.display();

    swap(ob1,ob2);

    cout<<"\nAfter Swapping : \n\n";
    ob1.display();
    ob2.display();




}

