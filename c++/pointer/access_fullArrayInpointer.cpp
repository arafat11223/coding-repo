#include<iostream>
using namespace std;
int main()
{
    int a[3]={1,2,3};
    int (*p)[3]= &a;
    cout<<p<< " "<<a<<" "<<*p<<" <<*a"<<endl;
}