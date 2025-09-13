#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxlen=1;
    int cnt=1;
    for(int i=1;i<n;i++)
    {
        if (arr[i] >= arr[i - 1])
        {
            cnt++;
        }
        else
        {
            cnt=1;
        }
        maxlen=max(maxlen,cnt);
    }
    cout<<maxlen;
}