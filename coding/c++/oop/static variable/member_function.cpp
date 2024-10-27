#include<iostream>
using namespace std;
class demo
{
    int x;
    static int y;
    public:
    void getdata(int a)
    {
        x=a;
        y++;
        

    }
    void display_data()
    {
        cout<<"x= "<<x<<"\n"<<"y= "<<y<<endl;

    }
    static void abc()
    {
        cout<<"y= "<<y<<endl;
    }
};
int demo::y;

int main()
{
    demo obj1,obj2;
    obj1.getdata(10);
    obj1.display_data();
    demo::abc();

}