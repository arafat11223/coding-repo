#include<bits/stdc++.h>
using namespace std;
class base
{
    public:
    virtual void show()=0;
    
};
class derived1:public base
{
    public:
    void show()
    {
        cout<<"derived 1"<<endl;
    }
};
class derived2:public base
{
    public:
    void show()
    {
        cout<<"derived 2"<<endl;
    }
};

int main()
{
    base *arr[2];
    derived1 ob1;
    derived2 ob2;
    arr[0]=&ob1;
    arr[1]=&ob2;
    arr[0]->show();
    arr[1]->show();

}