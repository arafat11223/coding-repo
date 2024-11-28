#include<iostream>
using namespace std;
class Base
{
//protected:
    int a;
public:
    void set_a(int i)
    {
        a = i;
    }
    int get_a()
    {
        return a;
    }
};
class D: public Base
{
    int b;
public:
    void set_b(int j)
    {
        b = j;
    }
    int get_ab()
    {
        return get_a() * b;
    }
};
int main()
{
    Base *p;
    D obj;
    p=new D[5];
    for(int i=0;i<5;i++)
    {
        p->set_a(i);
        cout<<p->get_a()<<endl;
        p++;

    }
    for(int i=4; i>=0; i--)
    {
        p--;
        cout << p->get_a() << " ";
    }
    delete[]p;


}