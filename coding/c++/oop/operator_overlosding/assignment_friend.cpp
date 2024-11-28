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
    friend int operator <(test obj ,test obj1);

    

};
int operator <(test obj, test obj1)
    {
        
        if((obj1.a<obj.a)&&(obj1.b<obj.b))
        {
            return 1;
        }
        else{
            return 0;
        }

    }
int main()
{
    test obj1(6,90.45),obj2(5,89.44),obj3;
    cout<<"obj1 : ";
    obj1.show();
    cout<<"obj2 : ";
    obj2.show();
    if(obj1<obj2)
    {
        cout<<"obj1 is less then obj2"<<endl;
    }
    else
    {
        cout<<"obj1 is greater then obj2"<<endl;
    }
}