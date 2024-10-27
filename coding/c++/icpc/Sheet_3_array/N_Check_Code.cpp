#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int s=a+b+1;
    int a[s];
    for(int i=0;i<s;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<s;i++)
    {
        cout<<a[i];
    }
}