#include<iostream>
using namespace std;

class Base
{
protected:
    int a;
public:
    Base(int i)
    {
        a = i;
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
    Derived(int j, int k) :Base(k)
    {
        b = j;
        a=k;
    }
    int get_ab()
    {
        return a * b;
    }
};
int main()
{
    Derived ob(10, 20);
    //ob.set_a(20);
    cout << ob.get_ab() << endl;

}