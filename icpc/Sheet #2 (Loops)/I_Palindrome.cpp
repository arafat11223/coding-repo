#include<iostream>
using namespace std;
int main()
{
    int n,rem,result=0,c;
    cin>>n;
    c=n;
    while(c!=0)
    {
        rem=c % 10;
        result = (result * 10) + rem;
        c = c / 10;
    }
    cout<<result<<endl;
    if(n==result)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}