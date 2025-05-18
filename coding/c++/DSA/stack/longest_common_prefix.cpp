#include<bits/stdc++.h>
using namespace std;
string commonprefix(string s1,string s2)
{
    int n=min(s1.size(),s2.size());
    string ans="";
    
    for(int i=0;i<n;i++)
    {
        if(s1[i]==s2[i])
        {
            ans+=s1[i];
        }
        else
        {
            break;
        }
    }
    return ans;
    
}
int main()
{
    vector<string>strs={"flower","flow","flight"};
    string anss=strs[0];
    int n=strs.size();
    for(int i=1;i<strs.size();i++)
    {
        anss =commonprefix(anss,strs[i]);

    }
    cout<<anss<<endl;
    
                                  
}