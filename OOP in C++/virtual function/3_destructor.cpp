#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"base constructor called"<<endl;
    }
    virtual~base()// virtual na dile destructor 1 bar call hbe base destructor
    {
        cout<<"base destructor called"<<endl;
    }
};
class derived: public base
{
    public:
    derived()
    {
        cout<<"derived constructor called"<<endl;
    }
    ~derived()
    {
        cout<<"derived destructor called"<<endl;
    }
};
int main()
{
    base *baseptr=new derived();// বেস ক্লাস পয়েন্টার দিয়ে ডেরাইভড অবজেক্ট তৈরি
    delete baseptr; // ডেস্ট্রাক্টর কল
}