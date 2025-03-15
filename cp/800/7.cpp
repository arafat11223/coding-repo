#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n+2];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        if(arr[k]>0)
        {
            if(arr[i]>=arr[k])
            {
                ans+=1;
            }
        }
        else
        {
            if(arr[i]>=1)
            {
                ans+=1;
            }
        }
        
    }
    cout<<ans<<endl;

}