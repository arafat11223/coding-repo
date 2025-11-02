#include<bits/stdc++.h>
using namespace std;
bool isprime(long long root)
{
    int cnt=0;
    if(root<2)
    {
        return false;
    }
    if(root%2==0)
    {
        if(root==2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    for(long long i=3;i<=sqrt(root);i+=2)
    {
        if(root%i==0)
        {
            cnt++;
            if(root/i!=i)
            {
                cnt++;
            }
        }
        if(cnt>2)
        {
            return false;
        }
         

    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    // vector<long long>arr(n);
    for(int i=0;i<n;i++)
    {
        // cin>>arr[i];
        long long x;
        cin>>x;
        long long root=sqrt(x);
        if(root*root==x && isprime(root))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
            
        
    }
}