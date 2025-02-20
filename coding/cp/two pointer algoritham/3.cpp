//find the pair in array whose sum is closest to x
#include<bits/stdc++.h>
using namespace std;
void solve(int arr[],int x,int n)
{
    int st=0;
    int end=n-1;
    int dif=INT_MAX;
    int indx1,indx2;

    while(st<end)
    {
        int sum=arr[st]+arr[end];
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
    cout<<arr[indx1]<<" + "<<arr[indx2]<<"= "<<arr[indx1]+arr[indx2];

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
    int x;
    cin>>x;
    sort(arr,arr+n);
    solve(arr,x,n);
    
}