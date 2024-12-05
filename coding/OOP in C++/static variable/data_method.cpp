#include<iostream>
using namespace std;
class demo
{
    int x,y;
    static int z;
    public:
    int c;
    void getdata(int a,int b)
    {
        x=a;
        y=b;
        z++;

    }
    void display_data()
    {
        cout<<"x= "<<x<<"\n"<<"y= "<<y<<"\n"<<"z= "<<z<<endl;

    }

};
int demo::z=2;
int main()
{
    demo obj1,obj2;
    obj1.getdata(10,20);
    obj2.getdata(40,50);
    obj1.display_data();
    obj2.display_data();
}