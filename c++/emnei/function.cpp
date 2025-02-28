#include<iostream>
using namespace std;
int add(int z)
{
    z=10;
    return z;
    
}
int main()
{
    int a=5;
    a=add(a);
    cout<<a;
}