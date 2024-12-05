#include<iostream>
using namespace std;
template<class t1, class t2>
class test
{
    public:
    t1 data1;
    t2 data2;
    test(t1 a,t2 b)
    {
        data1=a;
        data2=b;
    }
    void display()
    {
        cout<<this->data1<<endl<<this->data2<<endl;
    }

};
int main()
{
    test<string, char>obj("hello",'c');
    obj.display();
}