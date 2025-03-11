#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n)  //0(n^2)
{
    
    for(int i=0;i<n-1;i++)
    {
        int smallest_idx=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[smallest_idx]) //kon pos smallest ele aceh oitake smallest_ind push korbo
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
int main()
{
    int n=5;
    int arr[]={4,2,7,0,3};
    selection_sort(arr,n);

}