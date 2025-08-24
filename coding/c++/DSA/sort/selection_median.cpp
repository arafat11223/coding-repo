#include<bits/stdc++.h>
using namespace std;   
void selection_sort(vector<int>&arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int smallest_idx=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[smallest_idx]) 
            {
                smallest_idx=j; 
            }
        }
        swap(arr[i],arr[smallest_idx]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
} 
double median(vector<int>&arr,int n)
{
    if(n%2!=0)
    {
        return arr[n/2];
    }
    else
    {
        return (arr[n/2-1]+arr[n/2])/2.0;
    }
}
int main()
{
    vector<int> arr={4, 2, 7, 0, 3,1};
    int n=arr.size();
    selection_sort(arr, n);
    double med = median(arr, n);
    cout<<"median: "<<med<<endl;
}