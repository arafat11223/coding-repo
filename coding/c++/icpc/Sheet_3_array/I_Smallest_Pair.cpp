#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int test_case;
    cin>>test_case;
    for(int i=0 ;i<test_case;i++)
    {
        int n,sum=0;
        cin>>n;
        vector<int>v(n);
        for(int j=1;j<=n;j++)
        {
            cin>>v[i];
        }
       // int sum=0;
        int min_sum=0;
        for(int i=1;i<=v.size();i++)
        {
           // int sum=0;
           //int min_sum=0;
            for(int j=i+1;j<=v.size();j++)
            {
                //int sum=0;
                sum=v[i]+v[j]+(j-i);
                if(sum>min_sum)
                {
                    min_sum=sum;
                }

            }
           // cout<<min_sum;
            
        }
        cout<<min_sum;

    }
    
}