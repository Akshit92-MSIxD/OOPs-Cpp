#include <iostream>

using namespace std;

class Person
{
    int height , age;
    
    public:

    Person()
    {
        cout<<"Default constructor called here\n\n";
    }
    
    void set_h_a(void)
    {
        cout<<"Enter the height : ";
        cin>>height;
        cout<<"Enter the age : ";
        cin>>age;
    }
    
    void get_h_a(void)
    {
        cout<<"Height : "<<height<<endl;
        cout<<"Age : "<<age<<endl;
        
    }
};

int main()
{
    Person P[5]; //Array of objects , Default constructor will be called 5 times
    
    for(int i=0;i<5;i++)
    {
        P[i].set_h_a();
        P[i].get_h_a();
    }
}