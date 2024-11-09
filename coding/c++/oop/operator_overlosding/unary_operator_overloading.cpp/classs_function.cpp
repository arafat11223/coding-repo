#include<iostream>
using namespace std;
class test
{
    int a,b;
    public:
    test (int x,int y)
    {
        a=x;
        b=y;

    }
    void show()
    {
        cout<<"a = "<<a<<"b = "<<b<<endl;
    }
    test operator -()
    {
        a=-a;
        b=-b;
    }
    
    
};
int main()
{
    test obj1(-10,20);
    obj1.show();
    -obj1;
    obj1.show();
}