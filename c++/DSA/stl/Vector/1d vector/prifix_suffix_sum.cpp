#include<iostream>
#include<vector>
using namespace std;
int prefix_suffix_sum(vector<int>&v)
{
    int totalsum=0;
    for(int i=0;i<v.size();i++)
    {
        totalsum+=v[i];
    }
    for(int i=0;i<v.size();i++)
    {
        int prefix_sum=0;
        prefix_sum+=v[i];
        int suffixsum=totalsum-prefix_sum;
        if(prefix_sum==suffixsum)
        {
            return 1;
        }
        
    }
    return 0;

}
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);

    }
    cout<<prefix_suffix_sum(v)<<endl;
}        