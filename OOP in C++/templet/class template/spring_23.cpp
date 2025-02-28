#include<bits/stdc++.h>
using namespace std;
template<class t>
class test
{
    t a,b;
    public:
    test(t x,t y)
    {
        a=x;
        b=y;
    }
    t add()
    {
        return a+b;
    }

};
int main()
{
    test<int>obj1(5,10);
    cout<<"adding two integers: 5 and 10 result: "<<obj1.add()<<endl;

    test<float>obj2(3.14,2.71);
    cout<<"adding two floating-point numbers: 3.14 and 2.71 result: "<<obj1.add()<<endl;

    test<string>obj3("hello ","world");
    cout<<"concating two string: hello and world result: "<<obj3.add()<<endl;
}

