#include<iostream>
using namespace std;
class base
{
    int a;
    public:
     virtual void display()//virtual na dile vase function cal hbe
    {
        cout<<"this is base class function"<<endl;
    }
};
class derive:public base
{
    int b;
    void display()
    {
        cout<<"this is derive class function"<<endl;
    }
};
int main()
{
    base *base_ptr;
    derive derive_obj;
    base_ptr=&derive_obj;
    base_ptr->display();
    
}