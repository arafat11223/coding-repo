//sort an array consisting of only 0 and 1
#include<iostream>
#include<vector>
using namespace std;
void sort_even_odd(vector<int> &v)
{
   int left=0;
   int right=v.size()-1;
   while(left<right)
   {
        if(v[left]%2!=0 && v[right]%2==0)
        {
            int rem;
            rem=v[left];
            v[left]=v[right];
            v[right]=rem;
            left++;
            right--;
        }
        if(v[left]%2==0)
        {
            left++;
        }
        if(v[right]%2!=0)
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
    sort_even_odd(v);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }

}






