//sort an array consisting of only 0 and 1
#include<iostream>
#include<vector>
using namespace std;
void sort_zeros_one(vector<int> &v)
{
   int left=0;
   int right=v.size()-1;
   while(left<right)
   {
        if(v[left]==1 && v[right]==0)
        {
            v[left]=0;
            v[right]=1;
            left++;
            right--;
        }
        if(v[left]==0)
        {
            left++;
        }
        if(v[right]==1)
        {
            right--;
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
    sort_zeros_one(v);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }

}






