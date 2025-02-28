#include<iostream>
using namespace std;
template<class t>
class sum
{
    t a,b;
    public:
    sum(t x, t  y)
    {
        a=x;
        b=y;

    }
    t add()
    {
        return a+b;
    }
    void show()
    {
        cout<<"add : "<<add()<<endl;
    }
};
int main()
{
    sum<int>obj(12,49);
    obj.show();
    
    sum<float>obj2(7.3,5.5);
    obj2.show();
    sum<string>obj3("hello"," cooder");
    obj3.show();
}

