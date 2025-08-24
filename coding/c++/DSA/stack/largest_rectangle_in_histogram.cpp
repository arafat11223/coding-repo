#include<bits/stdc++.h>     
using namespace std;
int main()
{
    vector<int>height={2,1,5,6,2,3};
    vector<int>left(height.size(),0);
    vector<int>right(height.size(),0);
    stack<int>s;
    int n=height.size();
    // right smaller
    for(int i=n-1;i>=0;i--)
    {
        while(!s.empty() && height[s.top()]>=height[i])
        {
            s.pop();
        }
        if(s.empty())
        {
            right[i]=-1;
        }
        else
        {
            right[i]=s.top();
        }
        s.push(i);
    }
    //left smaller
    for(int i=0;i<n;i++)
    {
        while(!s.empty()&& height[s.top()]>=height[i])
        {
            s.pop();
        }
        if(s.empty())
        {
            left[i]=-1;
        }
        else
        {
            left[i]=s.top();
        }
        s.push(i);
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int r=right[i];
        int l=left[i];
        int area=height[i]*(r-l-1);
        ans=max(area,ans);
    }
    cout<<ans;
}