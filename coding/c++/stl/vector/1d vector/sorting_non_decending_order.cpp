//given an integer array a sorted in non decreasing ordet,return an
//array of the square of each number in sorted in non decreasing order
#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>&a)
{
    int left=0;
    int right=a.size()-1;
    vector<int>ans;
///-10 -3 1 3 4 5 6
    while(left<right)
    {
        if(abs(a[left])<abs(a[right]))
        {
            //a[left]=(a[right]*a[right]);
            ans.push_back(a[right]*a[right]);
            right--;
        }
        else
        {
            //a[left]=(a[left]*a[left]);
            ans.push_back(a[left]*a[left]);
            left++;
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
    sort(a);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}