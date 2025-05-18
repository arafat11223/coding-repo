#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        long long x,y,a;
        cin>>x>>y>>a;
        long long ans=0;
        long long z=a+1;
        long long i=0;
        while(ans<z)
        {
            if(i%2==0)
            {
                ans=ans+x;
            }
            else
            ans=ans+y;
            i++;
        }
        //cout<<i<<endl;
        if(i%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}