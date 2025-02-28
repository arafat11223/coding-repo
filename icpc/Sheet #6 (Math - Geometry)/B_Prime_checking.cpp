#include<bits/stdc++.h>
using namespace std;
bool prime(long long n)
{
    //int count =0;
    if(n<2)
    {
        return false;
        
    }
    if(n==2)
    return true;
    if(n%2==0)
    {
        return false;
    }
    for(int i=3;i<=sqrt(n);i+=2)
    {
        if(n%i==0)
        {
            
            return false;
        }
    }
    return true;

}
int main()
{
    long long n;
    cin>>n;
    if(prime(n))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    

}