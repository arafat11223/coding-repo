#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,q;
        cin>>n>>q;
        int arr[n];
        int pre[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        pre[0]=0;
        pre[1]=arr[0];
        for(int i=2;i<=n;i++)
        {
            pre[i]=arr[i-1]+pre[i-1];
        }
        for(int i=0;i<q;i++)
        {
            long long sum=0;

            int l,r,k;
            cin>>l>>r>>k; 
            sum=pre[n]-pre[r]+pre[l-1]+(r-l+1)*k;           
            // for(int m=0;m<n;m++)
            // {
                
            //     if(m>=l-1 && m<=r-1)
            //     {
            //         int x=k%10;
            //         sum+=x;
            //     }
            //     else
            //     {
            //         sum+=(arr[m])%10;
            //     }
                
            //     // cout<<arr[m]<<" ";
            // }
            if(sum%2!=0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            
        }
    }
}
