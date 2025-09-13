#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    { 
        long long m;
        cin >> m;
        int cnt=0;
        for(long long i=2;i*i<=m;i++)
        {
            if(m%m==0 && m%2!=0 && m!=1)
            {
                cnt=1;
                break;
            }
            if(m%i==0)
            {
                if(i%2!=0)
                {
                    cnt=1;
                    break;
                }
                if((m/i)%2!=0 && (m/i)!=i)
                {
                    cnt=1;
                    break;
                }
                
                
            }
            
        }
        if(cnt==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    
    }
    return 0;
}