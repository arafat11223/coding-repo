#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int x,n,m;
        cin>>x>>n>>m;
        long long s=m*10;
        int y=n;
        if(x<=s)
        {
            cout<<"YES"<<endl;
            continue;
        }
        while(x>=s  && y!=0)
        {
            x=(x/2)+10;
            y--;
        }
        if(x>s)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }


    }
}