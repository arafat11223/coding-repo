#include<iostream>
using namespace std;
class test
{
    int a;
    public:
    void setdata(int a)
    {
        this->a=a;
    }
    void getdata()
    {
        cout<<"the value of a is: "<<a<<endl;

    }
};
int main()
{
    test a;
    a.setdata(10);
    a.getdata();

}