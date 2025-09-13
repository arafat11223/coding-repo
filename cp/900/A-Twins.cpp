#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.rbegin(),arr.rend());
    int sum1=0,sum2=0;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        sum1+=arr[i];
        sum2=accumulate(arr.begin()+i+1,arr.end(),0);
        
        if(sum1<=sum2)
        {
            cnt++;
        }


    }
    cout<<cnt+1<<endl;
}