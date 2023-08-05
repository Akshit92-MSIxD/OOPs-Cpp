#include <iostream>
using namespace std;

// Unary post-increament/pre-decreament operator ('++') overloading

class Value
{
    int x;

    public : 

    Value()
    {
        x=0;
    }

    Value(int data)
    {
        x=data;
    }

    void display_data()
    {
        cout<<x<<endl;
    }
    
    Value operator++() //Pre-increment operator function
    {
        Value temp;
        temp.x = ++x;

        return temp;
    }

    Value operator++(int) //Post-increment operator function , passing (int) as argument to (differntiate) between post/pre-increment operator
    {
        Value temp;
        temp.x = x++;

        return temp;
    }



    
};

int main()
{
    Value v1(2),v2;

    // Case : Pre-increment operator overloading
    
    v1.display_data();
    v2 = ++v1; // v1.operator++();
    v2.display_data();
    v1.display_data();
    cout<<endl<<endl;


    // Case : Post-increment operator overloading

    Value v3(10),v4;

    v3.display_data();
    v4 = v3++; // v3.operator++(0);
    v4.display_data();
    v3.display_data();
    ++v3;
    v3.display_data();






}