#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+4];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long sum1=0,sum2=0;
    int st=0,end=n-1;
    long long result=0;
    while(st<=end)
    {
        if(sum1<sum2)
        {
            sum1+=arr[st];
            st++;
        }
        
        
        else
        {
            sum2+=arr[end];
            end--;
        }
        if(sum1==sum2)
        {
            result=sum1;

        }
    }
    cout<<result<<endl;

}