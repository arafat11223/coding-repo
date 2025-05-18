#include<bits/stdc++.h>     
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        queue<int> q;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            q.push(x);
        }
        while(q.size()>1)
        {
            int a=q.front();
            q.pop();
            int b=q.front();
            q.pop();
            int ans=a+b-1;
            q.push(ans);
        }
        cout<<q.front()<<endl;
    }
}