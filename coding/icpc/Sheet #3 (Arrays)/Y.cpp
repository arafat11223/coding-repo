#include<iostream>
using namespace std;
int main()
{
    int n ,q;
    cin>>n>>q;
    long long arr[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];

    }
    arr[0]=0;
    for(int i=1;i<=n;i++)
    {
        arr[i]=arr[i]+arr[i-1];
    }
    for(int i=0;i<q;i++)
    {
        int l,r;
        cin>>l>>r;
        
        cout<<(arr[r]-arr[l-1])<<endl;

    }
    

}