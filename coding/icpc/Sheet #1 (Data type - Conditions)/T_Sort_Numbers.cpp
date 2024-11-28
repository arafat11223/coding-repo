#include<iostream>
using namespace std;
int main()
{
    int arr[3],a[3];
    for(int i=0;i<3;i++)
    {
        
        cin>>arr[i];
    }
    for(int i=0;i<3;i++)
    {
        a[i]=arr[i];
    }
    
    for(int i=0;i<3;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(arr[i]>arr[j])
            {
                //int rem;
                //rem=arr[i];
                //arr[i]=arr[j];
                //arr[j]=rem;
                swap(arr[i],arr[j]);
            }
            

        }
    }
    for(int i=0;i<3;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<a[i]<<endl;
    }
    

}