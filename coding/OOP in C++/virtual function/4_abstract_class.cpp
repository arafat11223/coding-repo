#include<iostream>
using namespace std;
class base
{
    public:
    virtual void show() =0;
    void display()
    {
        cout<<"hi  i am abstract class"<<endl;
    }
};
class derived1: public base
{
    public:
    void show()
    {
        cout<<"hi i am derived1 class"<<endl;
    }

};
int main()
{
    derived1 obj;
    obj.show();
    obj.display();
}