#include<iostream>
using namespace std;
class boolean
{
    bool a;
    public:
    boolean(bool x=0)
    {
        a=x;
    }
    boolean operator &&(boolean ob)
    {
        boolean obj;
        obj.a=a && ob.a;
        return obj;

    }
    boolean operator ||(boolean ob)
    {
        boolean obj;
        obj.a=a || ob.a;
        return obj;

    }
    void show()
    {
        if(a)
        {
            cout<<"true"<<endl;
        }
        else{
            cout<<"false"<<endl;
        }
    }
};
int main()
{
    boolean obj1(0),obj2(1),obj3;
    obj3=obj1 && obj2;
    cout<<"&& operator  ";
    obj3.show();
    obj3=obj1 || obj2;
    cout<<"|| operator  ";
    obj3.show();
}
