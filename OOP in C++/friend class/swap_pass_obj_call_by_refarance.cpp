#include<iostream>
using namespace std;
class y;
class x
{
    int value1;
    public:
    void set(int a)
    {
        value1=a;
    }
    void get()
    {
        cout<<value1<<endl;
    }
    friend void swap(x &e,y &f);
};
class y
{
    int value2;
    public:
    void set(int b)
    {
        value2=b;
    }
    void get()
    {
        cout<<value2<<endl;
    }
    friend void swap(x &e,y &f);
};
void swap(x &e,y &f)
{
    int temp= e.value1;
    e.value1=f.value2;
    f.value2=temp;
}
int main()
{
    x obj1;
    y obj2;
    obj1.set(10);
    obj2.set(20);
    swap(obj1,obj2);
   //cout<<"before swap :";
   obj1.get();
   //cout<<"after swap :";
   obj2.get();


}