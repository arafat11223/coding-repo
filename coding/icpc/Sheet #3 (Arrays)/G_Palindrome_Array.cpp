
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        long long ele;
        cin>>ele;
        a.push_back(ele);
    }
    vector<int>v;
   for(int i=0;i<n;i++)
   {
        int ans=a[n-1-i];
        v.push_back(ans);
   }    
   int count=0;
    
    for(int i=0;i<n;i++)
    {
        if(a[i]!=v[i])
        {
            count=-1;
            break;

        }

    }
    if(count==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
   }