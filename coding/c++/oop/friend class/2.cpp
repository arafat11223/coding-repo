#include<iostream>
using namespace std;
class y;// ei line na likhle error asbe karon 12 line y unacceble
class x
{
    int data;
    public:
    void set(int a)
    {
        data=a;
    }
    friend void add(x ,y );
};
class y
{
    int num;
    public:
    void set(int b)
    {
        num=b;
    }
    friend void add(x,y);
};
void add(x o1,y o2)
{
    cout<<"sum = "<<o1.data +o2.num<<endl;

}
int main()
{
    x obj1;
    obj1.set(3);
    y obj2;
    obj2.set(5);
    add(obj1,obj2);
    return 0;
}