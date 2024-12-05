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
    friend test operator ++(test &ob,int n);
   
};
test operator ++(test &ob,int n)
{
    ob.a++;
    ob.b++;
    return ob;

}
int main()
{
    int p,q;
    test obj1,obj2(10,20),obj3(5,6);
    obj2++;
    obj2.set(p,q);
    cout<<p<<endl<<q<<endl;
}