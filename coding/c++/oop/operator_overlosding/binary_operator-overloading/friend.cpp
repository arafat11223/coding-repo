#include<iostream>
using namespace std;
class test
{
    int a,b;
    public:
    test (int x=0,int y=0)
    {
        a=x;
        b=y;
    }
    void set(int &c,int &d)
    {
        c=a;
        d=b;

    }
    friend test operator +(int n,test ob);
   
};
test operator +(int n, test ob)
{
    test t;
    t.a=n+ob.a;
    t.b=n+ob.b;
    return t;

}
int main()
{
    int p,q;
    test obj1,obj2(10,20),obj3(5,6);
    obj1=30+obj3;
    obj1.set(p,q);
    cout<<p<<endl<<q<<endl;
}