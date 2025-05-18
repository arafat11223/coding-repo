#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int a;
        cin>>a;
        int arr[a+1];
        int sum=0;
        //map<int,int>cnt;
        int pos=0;
        int cnt=0;
        for(int i=0;i<a;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
            
            
            if(i>0 && arr[i-1]==-1 &&arr[i]==-1)
            {
                pos=1;
                
            }
            else if(arr[i]==-1)
            {
                cnt++;
                // pos=2;
            }
            // else
            // {
            //     pos=3;
            // }
        }
        if(pos==1)
        {
            sum+=4;
            cout<<sum<<endl;
            
        }  
        else if(cnt==0)
        {
            sum-=4;
            cout<<sum<<endl;
            
        }  
        else
        {
            cout<<sum<<endl;
        }
            
            
            

        
        
        
        
    }
    
}