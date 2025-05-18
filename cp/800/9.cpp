#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        int x=INT_MAX;
        int ans=0;
        for(int i=a;i<=x;i++)
        {
            if(i%b!=0)
            {
                ans++;

            }
            else
            {
                break;
            }
        }
        cout<<ans<<endl;
    }
}