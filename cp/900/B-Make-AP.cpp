#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int d1=abs(b-a);
        int d2=abs(c-b);
        if(d1==d2)
        {
            cout<<"YES"<<endl;
        }
        else if(d1%2==0 && d2%2==0)
        {
            cout<<"YES"<<endl;
        }
        else if(d1%2!=0 && d2%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}