#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int x;
        cin>>x;
        int sum=9;
        list<int>l;
        l.push_front(9);
        if(x>45)
        {
            cout<<"-1"<<endl;
            continue;
        }
        vector<int>v;
        for(int i=9;i>=1;i--)
        {
            if(x>=i)
            {
                v.push_back(i);
                x-=i;
            }
        }
        sort(v.begin(),v.end());
        for(auto ele:v)
        {
            cout<<ele;
        }
        cout<<endl;
    }
}