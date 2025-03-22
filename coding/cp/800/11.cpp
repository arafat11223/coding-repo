#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    set<char>s;
    for(int i=0;i<str.size();i++)
    {
        char a;
        a=tolower(str[i]);
        s.insert(a);

    }
    int ans=s.size();
    //cout<<ans<<endl;
    //cout<cnt["m"]<<endl;
    if(ans==26)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    //cout<<cnt.size()<<endl;
}