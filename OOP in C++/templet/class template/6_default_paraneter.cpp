#include<iostream>
using namespace std;
template<class t1=int,class t2=float,class t3=string>
class test
{
    public:
    t1 a;
    t2 b;
    t3 c;
    test(t1 x,t2 y,t3 z)
    {
        a=x;
        b=y;
        c=z;
        cout<<"test class"<<endl;
    }
    test(t1 g,t2 h)
    {
        a=g;
        b=h;
        cout<<"test class 2"<<endl;
    }
    void display()
    {
        cout<<"a : "<<a<<endl;
        cout<<"b :"<<b<<endl;
        cout<<"c :"<<c<<endl;
    }


};
int main()
{
    test<>obj(4,7.9,"coder");
    obj.display();
    test<char, string,int>obj2('d',"hello",6);
    obj2.display();
    test<>obj3(4,7.9);
    obj3.display();

}