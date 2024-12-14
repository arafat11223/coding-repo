#include<iostream>
#include<vector>
using namespace std;
int rotate_array(vector<vector<int>>&v)
{
    ///transpose, roiverse every row
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            swap(v[i][j],v[j][i]);
        }
    }
    //roiverse every row
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            swap(v[i][j],v[j][i]);
        }
    }
    


}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>>v(n,vector<int>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>v[i][j];
        }
    }
    rotate_array(v);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

}