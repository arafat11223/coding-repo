//find the pair from 2 sorted array whose sum is closest to x
#include<bits/stdc++.h>
using namespace std;
void solve(int arr[],int arr2[],int n,int m,int x)
{
    int st=0;
    int end=m-1;
    int dif=INT_MAX;

    int indx1,indx2;

    while(st<n && end>=0)
    {
        int sum=arr[st]+arr2[end];
        if(abs(sum-x)<dif)
        {
            indx1=st;
            indx2=end;
            dif=abs(sum-x);
            

        }
        if(sum>x)
        {
            end--;
        }
        else
        {
            st++;
        }
    }
    //cout<<"pair of index is :"<<indx1<<","<<indx2<<endl;
    cout<<arr[indx1]<<" + "<<arr2[indx2]<<"= "<<arr[indx1]+arr2[indx2];

}
int main()
{
    int n;
    cin>>n;
    int arr[n+3];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int m;
    cin>>m;
    int arr2[m+3];
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];

    }
    int x;
    cin>>x;
    sort(arr,arr+n);
    sort(arr2,arr2+m);
    solve(arr,arr2,n,m,x);
    
}