#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int ans=a;
    int c;
    //int rem=0;
    
    while(a/b!=0)
    {
        c=a/b;
        //rem+=a%b;
        
        ans+=c;
        a=c+(a%b);

    }
    //cout<<rem<<endl;
    cout<<ans<<endl;
}