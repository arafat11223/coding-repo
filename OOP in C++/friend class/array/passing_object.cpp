#include<iostream>
using namespace std;
class complex
{
    int a;
    int b;
    public:
    void set(int x,int y)
    {
        a=x;
        b=y;
    }
    void setsum(complex ob1,complex ob2)
    {
        a=ob1.a+ob2.a;
        b=ob1.b+ob2.b;
    }
    void print()
    {
        cout<<"your complex number is : "<<a <<" + "<<b<<"i"<<endl;
    }
};
int main()
{
    complex obj1,obj2,obj3;
    obj1.set(1,2);
    obj1.print();
    obj2.set(3,4);
    obj2.print();
    obj3.setsum(obj1,obj2);
    obj3.print();

}