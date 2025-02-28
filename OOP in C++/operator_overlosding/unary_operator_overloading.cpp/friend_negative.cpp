#include<bits/stdc++.h>
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
        cout<<"a = "<<a<<"b = "<<b<<endl;
    }
    friend test operator -(test ob);
};
test operator -(test ob)
{
    test t;
    t.a=-ob.a;
    t.b=-ob.b;
    return t;
}
int main()
{
    test obj1(5,-10),obj2;
    obj2=-obj1;
    obj2.show();
}
