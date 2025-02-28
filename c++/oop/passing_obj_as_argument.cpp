#include<iostream>
using namespace std;
class hello
{
    
    public:
    int a;
    int b;
    int add(hello ob)
    {
        a=500+ob.a;
        b=20+ob.b;
        return a,b;
    }
};
int main()
{
    hello obj1,obj2;
    obj1.a=50;
    obj1.b=40;
    obj2.a=100;
    obj2.b=10;
    cout<<"initial values.................."<<endl;
    cout<<"object 1 : "<<obj1.a<<endl;
    cout<<"object 2 : "<<obj2.a<<endl;
    obj2.add(obj1);
    cout<<"new values.................."<<endl;
    cout<<"object 1 : "<<obj1.a<<endl;
    cout<<"object 2 : "<<obj2.a<<endl;
    cout<<"object: "<<obj2.b<<endl;

}