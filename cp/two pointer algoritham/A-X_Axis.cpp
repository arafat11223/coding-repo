#include<bits/stdc++.h>
using namespace std;    
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int ans=10;
        int result;
        for(int i=1;i<=10;i++)
        {
            result=abs(x-i)+abs(y-i)+abs(z-i);
            ans=min(ans,result);
            
        }
        cout<<ans<<endl;
    }
}