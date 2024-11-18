//A derived class can be used as a base class for another
//derived class, creating a multilevel class hierarchy.
#include<iostream>
using namespace std;
class base
{
    protected:
    int a;
    public:
    base(int i)
    {
        a=i;
        cout << "Base initialized with a = " << a << endl;
    }
    int get_a()
    {
        return a;
    }

};
class derived_1: protected base
{
    protected:
    int b;
    derived_1(int j,int k):base(k)
    {
        b=j;
        cout << "derived_1 initialized with a = " << b << endl;
        
        
    }
    int get_ab()
    {
        return a*b;
    }
};
class derived_2: public derived_1
{
    int c;
    public:
    derived_2(int i,int j,int k):derived_1(j,k)
    {
        c=i;
        cout << " derived_2 initialized with a = " << a << endl;
        
    }
    int get_abc()
    {
        return a*b*c;
    }

};
int main()
{
    derived_2 ob(10,20,30);
    cout<<ob.get_abc();
}