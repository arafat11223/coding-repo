//https://codeforces.com/problemset/pro...
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+3];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int serija=0,dima=0;
    int st=0;
    int end=n-1;
    int z=0;
    while(st<=end)
    {
        if(z%2==0)
        {
            if(arr[st]<arr[end])
            {

                serija+=arr[end];
                end--;
            }
            else
            {
                serija+=arr[st];
                st++;

            }
        }
        else
        {
            if(arr[st]<arr[end])
            {

                dima+=arr[end];
                end--;
            }
            else
            {
                dima+=arr[st];
                st++;

            }

        }
        z++;
    }
    cout<<serija<<" "<<dima<<endl;

}