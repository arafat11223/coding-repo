#include<iostream>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int min=a[0];
    
    
    
    for(int i=1;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            
        }
    }   
    
    for(int i=0;i<n;i++)
    {
        if(min==a[i])
        {
            count++;
        }
    }
    if(count%2==0)
    {
        cout<<"Unlucky"<<endl;

    }
    else
    {
        cout<<"Lucky"<<endl;
    }

}
