#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={6,8,0,1,3};
    stack<int>st;
    vector<int>ans(v.size(),0);
    for(int i=0;i<v.size();i++)
    
    {
        while(!st.empty())
        {
            if(st.top()<v[i])
            {
                ans[i]=st.top();
                break;
            }
            else
            {
                st.pop();
            }

        }
        if(st.empty())
        {
            ans[i]=-1;
        }
        st.push(v[i]);
    }
    for(auto ele:ans)
    {
        cout<<ele<<" ";
    }

}