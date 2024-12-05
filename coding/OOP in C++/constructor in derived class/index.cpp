#include<iostream>
using namespace std;
class base1
{
    int data1;
    public:
    base1(int i):data1(i)
    {
        //data1=i;
        cout<<"base1 class constructor called"<<endl;
    }
    void printb1()
    {
        cout<<"the value of data1 is : "<<data1<<endl;
    }
};
class base2
{
    int data2;
    public:
    base2(int i)
    {
        data2=i;
        cout<<"base2 class constructor called"<<endl;
    }
    void printb2()
    {
        cout<<"the value of data2 is : "<<data2<<endl;
    }
};
class derived: public base1, virtual public base2
{
    int derived1,derived2;
    public:
    derived(int a,int b,int c,int d): base1(a), base2(b)
    {
        derived1=c;
        derived2=d;
        cout<<"derived class constructor called"<<endl;
        
    }
    void print()
    {
        cout<<"the value of derived1 is : "<<derived1<<endl;
        cout<<"the value of derived2 is : "<<derived2<<endl;
    }

};
int main()
{
    derived obj(10,20,30,40);
    obj.print();
    obj.printb1();
    obj.printb2();
    
}