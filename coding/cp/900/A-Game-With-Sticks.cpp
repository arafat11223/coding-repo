#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int sum=min(n,m);
    if(sum==1)
    {
        cout<<"Akshat"<<endl;
        return 0;
    }
    if(sum%2==0)
    {
        cout<<"Malvika"<<endl;
    }
    else
    {
        cout<<"Akshat"<<endl;
    }
}