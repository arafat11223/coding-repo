#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
                int temp;
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }

        }
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            count++;
            break;
        }
        
    }
    if(count)
    {
        cout<<"no"<<endl;
    }
    else
    {
        cout<<"yes"<<endl;

    }
    
}