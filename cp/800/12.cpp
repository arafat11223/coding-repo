#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int ans=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='H' || str[i]=='Q' ||str[i]=='9' )
        {
            //cout<<"Yes"<<endl;
            ans++;
            break;
        }

    }
    if(ans==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}