//https://codeforces.com/problemset/pro...
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
        int arr[n+3];
        
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        vector<int>v;
        int st=0;
        int end=n-1;
        while(st<end)
        {
            v.push_back(arr[st]);
            v.push_back(arr[end]);
            st++;
            end--;
        }
        if(n%2!=0)
        {
            v.push_back(arr[st]);
        }
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
    

        cout<<endl;
    }

}