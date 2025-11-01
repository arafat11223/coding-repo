#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
    vector<int> v(n+1,0);
    
    for(int i=2;i*i<=n;i++) //for(int i=2;i<=n;i++)
    {
        if(v[i]==0)
        {
            for(int j=i+i;j<=n;j+=i)
            {
                v[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(v[i]==0)
        {
            cout<<i<<" ";
        }
    }
}