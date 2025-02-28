#include<iostream>
using namespace std;
class test
{
    int a,b;
    public:
    test(int x=0,int y=0)
    {
        a=x;
        b=y;
    }
    friend test operator +(int n,test ob);
    void set(int &c,int &d)
    {
        c=a;
        d=b;
    }
};
test operator +(int n,test ob)
{
    test t;
    t.a=n+ob.a;
    t.b=n+ob.b;
    return t;
}

int main()
{
    int p,q;
    test obj1(10,29),obj2;
    obj2=30+obj1;
    obj2.set(p,q);
    cout<<p<<"   "<<q;
}