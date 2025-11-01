#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            

        }
        
        for(int i=v.size()-1;i>=0;i--)
        {
            if(v[i-1]==1)
            {
                v[i-1]=2;
                
            }
            if(v[i]%v[i-1]==0 && v[i-1]!=1)
            {
                v[i-1]=v[i-1]+1;

            }
        }
        cout<<v.size()<<endl;
        for(int i=0;i<v.size()-1;i++)
        {
            cout<<v[i]<<" ";
        }
        
    



    }
    
}