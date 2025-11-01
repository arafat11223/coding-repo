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
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        } 
        int cnt=0;
        bool ok=true;
        for(int i=n-1;i>0;i--)
        {
            while(arr[i-1] >= arr[i] && arr[i-1] > 0) 
            {
                arr[i-1]=arr[i-1]/2;
                cnt++;

            }
            if(arr[i]<=arr[i-1])
            {
                ok=false;
                break;
            }
            
            
        }
        if(ok)
        {
            cout<<cnt<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
}