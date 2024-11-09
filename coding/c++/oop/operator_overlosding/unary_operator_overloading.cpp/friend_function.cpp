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
    friend void operator -(test &obj);
    
    
};
void operator -(test &obj)
{
    obj.a=-obj.a;
    obj.b=-obj.b;
}
int main()
{
    test obj1(-10,20),obj2(10,-20);
    obj1.show();
    -obj1;
    obj1.show();
    cout<<"-------------------"<<endl;
    obj2.show();
    -obj2;
    obj2.show();
}