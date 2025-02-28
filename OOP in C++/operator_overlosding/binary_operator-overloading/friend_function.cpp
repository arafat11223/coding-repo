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
    void show()
    {
        cout<<"a: "<<a<<"b: "<<b<<endl;
    }
    friend test operator +(test &ob1,test &ob2);
};
test operator +(test &ob1,test &ob2)
{
    test t;
    t.a=ob1.a-ob2.a;
    t.b=ob1.b+ob2.b;
    return t;
}
int main()
{
    test obj1(12,34),obj2(34,6),obj3;
    obj3=obj1+obj2;
    obj3.show();
}