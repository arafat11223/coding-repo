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
    logic  operator &&(logic &ob)
    {
        return logic(a && ob.a);


    }
}; 
int main()
{
    logic obj1(true),obj2(1),obj3(1);
    if(obj1 && obj2)
    {
        cout<<"obj1 and obj2 is true"<<endl;
    }
    else
    {
        cout<<"obj1 and obj2 is false"<<endl;

    }
    
}  