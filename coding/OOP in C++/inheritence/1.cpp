#include<iostream>
using namespace std;
class base
{
    int a;
    public:
    void set_a(int x)
    {
        a=x;
    }
    int get_a()
    {
        return a;
    }
};
class derived: public base
{
    int b;
    public:
    void set_b(int y)
    {
        b=y;
    }
    int get_ab()
    {
        return get_a()*b;
    }


};
int main()
{
    derived ob;
    ob.set_a(10);
    ob.set_b(20);
    cout<<ob.get_ab();
}


