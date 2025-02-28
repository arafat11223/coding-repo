//find the pair whose sum is equal to x
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[8];
    for(int i=0;i<8;i++)
    {
        cin>>arr[i];

    }
    int x;
    cin>>x;
    sort(arr,arr+8);
    int st=0;
    int end=7;

    while(st<end)
    {
        if(arr[end]+arr[st]==x)
        {
            cout<<"yes "<<arr[end]<<"+"<<arr[st]<<"="<<x<<endl;
            break;

        }
        else if(arr[end]+arr[st]<x)
        {
            st++;
        }
        else
        {
            end--;
        }
    }
}