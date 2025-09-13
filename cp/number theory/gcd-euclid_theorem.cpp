// GCD(a,b)=GCD(b,a%b) jotokhn na a%b=0 hoy tobkhon porjonto . answer hobe b jokhn a%b=0 hoy
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    int ans=gcd(a,b);
    //int ans=__gcd(a,b);  //inbuilt function direct use kora jay
    cout<<ans;
}