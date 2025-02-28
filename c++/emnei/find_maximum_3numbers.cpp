#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<"max ="<<a<<endl;
        }
        else
        {
            cout<<"max ="<<c<<endl;
        }
    }
    else if(b>c)
    {
        if(b>a)
        {
            cout<<"max ="<<b<<endl;
        }
        else
        {
            cout<<"max ="<<a<<endl;
        }
    }
    else if(c>a)
    {
        if(c>b)
        {
            cout<<"max ="<<c<<endl;
        }
        else
        {
            cout<<"max ="<<b<<endl;
        }
    }
}
