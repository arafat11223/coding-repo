#include<iostream>
using namespace std;
class myclass
{
    int a,b;
    public:
    myclass(int x,int y)
    {
        a=x;
        b=y;
    }
    int get()
    {
        return a*b;
    }

};
int main()
{
    myclass ob[5]={{3,4},{6,0},{-2,7},{9,5},{3,9}};
    for(int i=0;i<5;i++)
    {
        cout<<ob[i].get()<<endl;
    }
}