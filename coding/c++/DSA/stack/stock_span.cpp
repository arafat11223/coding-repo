#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>price={100,80,60,70,60,75,85};
    stack<int>st;
    vector<int>ans(price.size(),0);
    for(int i=0;i<price.size();i++)
    {
        while(!st.empty() && price[st.top()]<=price[i])
        {
            st.pop();
        }
        if(st.empty())
        {
            ans[i]=i+1;
        }
        else
        {
            ans[i]=i-st.top();
        }
        st.push(i);
    }
    for(auto ele:ans)
    {
        cout<<ele<<" ";
    }
}