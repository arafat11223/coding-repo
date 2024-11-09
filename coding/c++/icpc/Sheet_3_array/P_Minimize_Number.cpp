#include<iostream>
using namespace std;
bool even(int arr[], int n)
{
    for(int j=0;j<n;j++)
    {
        if(arr[j]%2!=0)
        {
            return false;

        }
    }
    for(int j=0;j<n;j++)
    {
        arr[j]=arr[j]/2;
    }
    return true;

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    int count =0;
    for(int i=0;i<n;i++)
    {
        
         cin>>a[i];
    }
    

    
    while(even(a,n))
    {
        count++;
        
    }
    cout<<count;
    
}
