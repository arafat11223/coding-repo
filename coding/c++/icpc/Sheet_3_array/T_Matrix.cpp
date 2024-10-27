#include<iostream>
#include<vector>
using namespace std;
void matrix(vector<vector<int>>&a)
{
    int primary_sum=0;
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<a[i].size();j++)
        {
            if(i==j)
            {
                primary_sum+=a[i][j];
            }
        }
    }
    //cout<<primary_sum<<endl;
    int secondary_sum=0;
    for(int i=0;i<a.size();i++)
    {
        for(int j=a[i].size()-1-i;j>=0;j--)
        {
            secondary_sum+=a[i][j];
            break;
        }
    }
   // cout<<secondary_sum;
    int sum=abs(primary_sum-secondary_sum);
    cout<<sum;

}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>>a(n,vector<int>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    matrix(a);
}