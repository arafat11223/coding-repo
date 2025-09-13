//https://practice.geeksforgeeks.org/pr...
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+2];
    set<int>s;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        s.insert(arr[i]);

    }
    if(s.size()<2)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<*(++s.begin())<<endl;
    }
    
    
}