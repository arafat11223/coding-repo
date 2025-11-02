#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[12];
    for(int i=0;i<12;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+12);
    int cnt=0;
    int sum=0;
    for(int i=11;i>=0;i--)
    {
        if(sum>=n)
        {
            break;
        }
        
        sum+=arr[i];
        cnt++;
    }
    if(sum<n)
    {
        cout<<-1<<endl;
        return 0;
    }
    cout<<cnt<<endl;
}