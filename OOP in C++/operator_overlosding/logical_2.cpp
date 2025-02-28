#include<iostream>
using namespace std;
class logic
{
    bool a;
    public:
    logic(bool x)
    {
        a=x;
    }
    bool get()
    {
        return a;

    }
    bool  operator &&(logic &ob)
    {
        return (a && ob.a);


    }
    friend bool operator ||(logic &ob1, logic &ob2);

}; 
bool operator ||(logic &ob1, logic &ob2)
{
    return (ob1.a || ob2.a);

}
int main()
{
    logic obj1(true),obj2(0),obj3(1);
    if(obj1 && obj2)
    {
        cout<<"obj1 and obj2 is true"<<endl;
    }
    else
    {
        cout<<"obj1 and obj2 is false"<<endl;

    }
    if(obj1 || obj2)
    {
        cout<<"obj1 and obj2 is true"<<endl;
    }
    else
    {
        cout<<"obj1 and obj2 is false"<<endl;

    }
    
}  