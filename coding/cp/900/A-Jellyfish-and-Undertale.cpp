#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int a,b;
        int n;
        cin>>a>>b>>n;
        int arr[n];
        long long sum=0;
        if(b>=a)
        {
            sum+=a;
            b=a;
        }
        else
        {
            sum+=b;
        }
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]+1<=a)
            {
                sum+=arr[i];
            }
            else
            {
                sum+=a-1;
            }
        }
        
        cout<<sum<<endl;
        
    }
}