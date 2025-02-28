#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    int i;
    long long sum=0;
    for(i=0;i<n;i++)
    {
        long long ele;
        cin>>ele;
        v.push_back(ele);
    }
    for(i=0;i<n;i++)
    {
        sum+=v[i];
    }
    cout<<abs(sum)<<endl;

}