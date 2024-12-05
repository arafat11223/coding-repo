#include<iostream>
using namespace std;
template<class a>
//template<typename t>
class test
{
    a data;
    public:
    test(a da)
    {
        data=da;
    }
    void display()
    {
        cout<<"the data is : "<<data<<endl; 
    }
};
int main()
{
    test<int>inttest(29);
    test<string>stringtest("hello coder");
    inttest.display();
    stringtest.display();

    
}
