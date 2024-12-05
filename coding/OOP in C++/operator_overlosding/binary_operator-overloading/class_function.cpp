#include<iostream>
using namespace std;
class test
{
    int a,b;
    public:
    test (int x,int y)
    {
        a=x;
        b=y;

    }
    void show()
    {
        cout<<"a = "<<a<<"b = "<<b<<endl;
    }
    test operator +(test obj)
    {
        test t(0,0);
        t.a=a+obj.a;
        t.b=b+obj.b;
        return t;
    }
    test operator -(test obj)
    {
        test t(0,0);
        t.a=a-obj.a;
        t.b=obj.b-b;
        return t;
    }
    
};
int main()
{
    test obj1(10,20),obj2(4,8),obj3(0,0);
    obj3=obj1+obj2;
    obj3.show();
    obj3=obj1-obj2;
    obj3.show();
}