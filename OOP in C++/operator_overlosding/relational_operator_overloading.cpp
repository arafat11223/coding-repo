#include<iostream>
using namespace std;
class test 
{
    int a;
    float b;
    public:
    test (int x=0,float y=0)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<"a: "<<a<<"  "<<"b :"<<b<<endl; 
    }

    void operator <(test obj)
    {
        
        if((a<obj.a)&&(b<obj.b))
        {
            cout<<"obj1 is less then obj2"<<endl;
        }
        else{
            cout<<"obj1 is greater then obj2"<<endl;
        }

    }

};
int main()
{
    test obj1(1,5.45),obj2(5,89.44),obj3;
    cout<<"obj1 : ";
    obj1.show();
    cout<<"obj2 : ";
    obj2.show();
    obj1<obj2;
    // {
    //     cout<<"obj1 is less then obj2"<<endl;
    // }
    // else
    // {
    //     cout<<"obj1 is greater then obj2"<<endl;
    // }
}