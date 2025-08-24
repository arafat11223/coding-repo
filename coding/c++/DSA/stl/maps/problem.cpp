//Given a list of N words. Count the number of words that 
//appear exactly twice in the list.


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
        map<string,int>m;
        for(int i=0;i<n;i++)
        {
            string str;
            cin>>str;
            m[str]++;
        }
        int ans=0;
        for(auto ele:m)
        {
            if(ele.second == 2)
            {
                ans++;
                cout<<ele.first<<endl;

            }
        }
        cout<<ans<<endl;
    }
}