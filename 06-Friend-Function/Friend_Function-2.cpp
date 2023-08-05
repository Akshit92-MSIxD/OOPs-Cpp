#include <iostream>
using namespace std;

class cuboid
{
    private:
    int l,b,h,V;

    public: 

    void set_data(int v1,int v2,int v3)
    {
      l=v1;
      b=v2;
      h=v3;
    }

    void calc_volume()
    {
        V=l*b*h;
    }

    void display_volume()
    {
        printf("Volume of cuboid : %d\n",V);
    }

    friend void access_data(cuboid);
};

void access_data(cuboid c1)
{
    printf("%d %d %d",c1.l,c1.b,c1.h); // Since friend function has no caller object,we need to pass some object
}

int main()
{
    cuboid c1;
    c1.set_data(2,3,4);
    c1.calc_volume();
    c1.display_volume();
    access_data(c1);
    
}