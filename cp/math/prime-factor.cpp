// divisor and prime
#include<bits/stdc++.h>
using namespace std;
bool prime(int i)
{
    int cnt=0;
    for(int j=2;j<=sqrt(i);j++)
    {
        if(i%j==0)
        {
            cnt++;
        }
        if(cnt>0)
        {
            return false;
        }
    }
    if(cnt==0)
    {
        
        return true;
    }
}
int main()
{
    int n;
    cin>>n;
    set<int>s;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            bool p=prime(i);
            if(p)
            {
                s.insert(i);
            }
            bool q=prime(n/i);
            if(q)
            {
                s.insert(n/i);
            }
        }
    }
    for(auto ele:s)
    {
        cout<<ele<<" ";
    }
    
}