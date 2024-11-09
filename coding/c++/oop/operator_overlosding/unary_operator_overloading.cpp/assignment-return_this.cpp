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
        cout<<"in constructor"<<endl;
    }
    ~test()
    {
        cout<<"in destructor"<<endl;
    }
    void set(int &c,int &d)
    {
        c=a;
        d=b;

    }
    test &operator =(test &ob)//& bad dile destuctor 4 bar call hbe
    {
        a=ob.a;
        b=ob.b;
        return *this;
    }
   
};

int main()
{
    int p,q;
    test obj1,obj2(10,20);
    obj1=obj2;
    //cout<<p<<endl<<q<<endl;
}