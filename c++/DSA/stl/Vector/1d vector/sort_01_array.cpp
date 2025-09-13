//sort an array consisting of only 0 and 1

#include<iostream>
#include<vector>
using namespace std;
void sort_zeros_one(vector<int> &v, int n)
{
    int zeros_count=0;
    for (int i=0;i<n;i++)
    {
        if(v[i]==0)
        {
            zeros_count++;

        }
    }
    for (int i=0;i<n;i++)
    {
        if(zeros_count>i)
        {
            v[i]=0;

        }
        else
        {
            v[i]=1;
        }
    }
    
    
}
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int element;
        cin>>element;
        v.push_back(element);
    }
    sort_zeros_one(v,n);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }

}






