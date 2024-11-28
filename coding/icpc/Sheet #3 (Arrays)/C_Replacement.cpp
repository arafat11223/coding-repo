#include<iostream>
#include<vector>
using namespace std;
void replacement(vector<int>&a)
{
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>0)
        {
            a[i]=1;
        }
        if(a[i]<0)
        {
            a[i]=2;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        a.push_back(ele);
    }
    replacement(a);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}