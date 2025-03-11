#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n)  //0(n^2)
{
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);

            }

        }
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
    bubble_sort(arr,n);

}