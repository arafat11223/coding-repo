#include <iostream>
using namespace std;
class rectangle
{
public:
    int l;
    int b;
    rectangle()//default constructor -no parameter passed
    {
        l=0;
        b=0;
    }
    rectangle(int a, int c)//parameterised con. -argument passed
    {
        l=a;
        b=c;
    }
    rectangle(rectangle& r)//copy constructor- initialise an obj by another existing obj
    {
        l=r.l;
        b=r.b;

    }
    ~rectangle()
    {
        cout<<"destructor is called"<<endl;
    }
};
int main()
{
    rectangle r1;
    cout<<r1.l<<" "<<r1.b<<endl;
    rectangle r2(10,20);
    cout<<r2.l<<" "<<r2.b<<endl;
    rectangle r3=r2;
    cout<<r3.l<<" "<<r3.b<<endl;

}