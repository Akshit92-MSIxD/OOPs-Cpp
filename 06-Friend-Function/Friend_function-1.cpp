#include <iostream>
using namespace std;

class Complex
{
    private:
    int a,b;
    
    public:
    
    void setdata(int v1,int v2)
    {
        a=v1;
        b=v2;
    }
    
    void getdata()
    {
        cout<<"Complex no. : "<<a<<" + "<<b<<"i"<<"\n\n";
    }
    
    // Below line shows that function : sum_of_complex is  friend of Class Complex
    // therefore ,it can access private members of class Complex  but indirectly using dot operator(.)
    // Since, it is not a member function of class Complex
    friend Complex sum_of_complex(Complex c1,Complex c2); 
    
    
};

Complex sum_of_complex(Complex c1, Complex c2)
{
    Complex c3;
    
    // c3.setdata((c1.a+c2.a),(c1.b+c2.b));
    c3.a=c1.a+c2.a;
    c3.b=c1.b+c2.b;
    return c3;
    
}

int main()
{
    Complex c1,c2,c3;
    c1.setdata(1,2);
    c1.getdata();
    
    c2.setdata(3,4);
    c2.getdata();
    
    c3=sum_of_complex(c1,c2);
    c3.getdata();
    
}
/* Properties of friend functions : 

1. Not in the scope of class , since it is not a member function of class.
2. No caller object , cannot be invoked from object of a class i.e c3.sum_of_complex(c1,c2)==INVALID.
3. Can be invoked without the help of object.
4. Usually contains objects as arguments.
5. Can be declared inside public or private section of a class.
6. It cannot access the members of class directly by their names , but need object_name.members_name to access any member , in which it is declared as a friend.
*/

