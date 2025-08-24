#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
       string s;
       cin>>s;
       int a=stoi(s);
       int b=sqrt(a);
       int m=(b*b);
       if(m==a)
       {
        cout<<0<<" "<<b<<endl;
       }
       else
       {
        cout<<-1<<endl;
       }
    }
}
