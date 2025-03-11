#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n)  //0(n^2)
{
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)//loop j sesh hle last pos a largest ele pacchi
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);

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