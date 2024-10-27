#include<iostream>
#include<string>
using namespace std;
class rectangle
{
    int l;
    int w;
    public:
    rectangle(int a,int b)
    {
        l=a;
        w=b;
    }
    friend void area(rectangle o1,rectangle o2);
};
void area(rectangle o1, rectangle o2)
    {
        int a=o1.l*o1.w;
        int b=o2.l*o2.w;
        int max=a;
        if(a<b)
        {
            max=b;
        }
        cout<<max<<endl;
    }
int main()
{
    rectangle ob1(10,20),obj2(5,10);
    area(ob1,obj2);
}