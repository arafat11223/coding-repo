#include<iostream>
using namespace std;

class Base
{
protected:
    int a;
public:
    void set_a(int x)
    {
        a = x;
    }
    int get_a()
    {
        return a;
    }
};
class Derived: private Base
{
    int b;
public:
    void set_b(int y, int z)
    {
        b = y;
        //a = get_a(); error 
        a=z;
    }
    int get_ab()
    {
        return a * b;
        //return get_a()*b;  //accessible
    }
};
int main()
{
    Derived ob;
    ob.set_b(10,0);
    //ob.set_a(20);
    cout << ob.get_ab();

}