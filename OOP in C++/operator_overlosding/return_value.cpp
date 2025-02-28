#include<iostream>
using namespace std;
class test
{
    int n;
    public:
    test()
    {
        n=0;
    }
    void set()
    {
        cout<<"enter number: ";
        cin>>n;

    }
    test operator +(test obj)
    {
        test t;
        t.n=n+t.n;
        return t;

    }
    int display()
    {
        return n;

    }
};
int main()
{
    test obj1,obj2,sum;
    obj1.set();
    obj2.set();
    sum=obj1+obj2;
    cout<<"addition value: "<<sum.display();
}