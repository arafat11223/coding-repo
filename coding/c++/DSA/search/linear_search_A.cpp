#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int pos,flag=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            pos=i+1;
            flag=1;
            break;

        }
    }
    if(flag==1)
    {
        cout<<"element is found at position :"<<pos<<endl;
    }
    else
    {
        cout<<"element is not found"<<endl;
    }
}