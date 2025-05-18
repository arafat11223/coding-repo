#include<bits/stdc++.h>
using namespace std;    
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,k,p;
        cin>>n>>k>>p;
        int x=abs(k);
        int y=abs(p);
        int ans=x/y;
        int rem=x%y;
        
        if(ans<=n && rem==0)
        {
            cout<<ans<<endl;
        }
        
        else if(ans>n)
        {
            cout<<"-1"<<endl;
        }
        else if(x<y)
        {
            cout<<"1"<<endl;
        }
        else
        {
            if(ans+1<=n)
            {
                cout<<ans+1<<endl;
            }
            else
            {
                cout<<"-1"<<endl;
            }
        }
    }
}