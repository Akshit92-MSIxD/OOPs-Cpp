// For theory refer to notebook notes created by me :)

#include <iostream>
using namespace std;

int factorial(int num)
{
     
     int fact = 1;

     while(num>0)
     {
        fact*=num;
        num--;
     }

     return fact;
}


int main()
{
    int n;

    cout<<"Enter a number to calculate its factorial : ";
    cin>>n;

    try{

        if(n<0)
        {
            throw n;
        }

        cout<<"Factorial : "<<factorial(n)<<endl;
    }

    catch(int e)
    {
        cout<<"Negative Number Exception!!!"<<endl;
        cout<<e<<" is a negative number so its factorial cant be calculated!!!";
    }


    cout<<"\nProgram has ended successfully!!!";
    return 0;
}

