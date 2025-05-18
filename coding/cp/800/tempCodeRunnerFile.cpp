#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    int f=1;
    for(int i=0;i<n.size();i++)
    {
        char ch=n[i];
        int x=ch-'0';
        int inv=9-x;
        int ans=min(x,inv);
        if(ans==0 && n.size()==1)
        {
            cout<<x;
        }
        else if(ans==0 &&f==1)
        {
            continue;

        }
        else if(ans>0 && f==1)
        {
            cout<<ans;
            f=2;

        }
        else
        {
            cout<<ans;
        }
        
    }
}