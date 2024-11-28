#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x,p;
    cin>>x>>p;
    double y=x/100.00;
    double f;
    f=p/(1-y);
    cout<<f<<endl;
    cout<<y;

}