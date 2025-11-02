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
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        int maxx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            maxx=max(maxx,arr[n-1]-arr[i]);
        }
        for(int i=0;i<n;i++)
        {
            maxx=max(maxx,arr[i]-arr[0]);
        }
        // auto it=max_element(arr.begin(),arr.end());
        // int pos=distance(arr.begin(),it);
        // maxx=max(maxx,arr[pos]-arr[pos+1]);
        for(int i=1;i<n;i++)
        {
            maxx=max(maxx,arr[i-1]-arr[i]);
        }
        cout<<maxx<<endl;
    }
}