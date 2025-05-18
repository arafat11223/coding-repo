#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int ans=0;
        int a[n]={};
        int seat[n+2]={};
        cin>>a[0];
        seat[a[0]]=1;
        for(int i=1;i<n;i++)
        {
            cin>>a[i];

            if(seat[a[i]+1]==0 && seat[a[i]-1]==0)
            {
                ans=1;
                

            }
            seat[a[i]]=1;
            
        }
        
        if(ans==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }



}