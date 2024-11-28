#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int>&a)
{
    int left=0;
    int right=a.size()-1;
    while(left<right)
    {
        swap(a[left],a[right]);
        left++;
        right--;

    }
    
}
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
    reverse(a);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";

    }
    
}