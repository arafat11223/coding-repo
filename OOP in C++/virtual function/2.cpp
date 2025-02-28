#include<iostream>
using namespace std;
class  base
{
    int x;
    public:
    virtual void set(int i)
    {
        x=i;
    }
    virtual void get()
    {
        cout<<"base class"<<endl;
        cout<<x<<endl;

    }

};
class derived: public base
{
    int y;
    public:
    void set(int j)
    {
        y=j;
    }
    void get()
    {
        cout<<"derived class"<<endl;
        cout<<y<<endl;
    }
};


int main()
{
    base *ptr;
    base b_obj;
    derived d_obj;
    ptr=&d_obj;
    ptr->set(10);
    //cout<<"base object x:"<<ptr->get()<<endl;
    ptr->get();
    ptr =&b_obj;
    ptr->set(20);
    //cout<<"derived object y: "<<ptr->get();
    ptr->get();
    
}