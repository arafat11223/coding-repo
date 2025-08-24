//give  a boolean 2d array where each rowis sorted
//find the row with the maximum number of ones
#include<iostream>
#include<vector>
using namespace std;
int max_one_row(vector<vector<int>>&v)
{
   int max_one=0;
   int max_one_row=-1;
   int column=v[0].size();
   for(int i=0;i<v.size();i++)
   {
        for(int j=0;j<v[i].size();j++)
        {
            if(v[i][j]==1)
            {
                int number_of_ones=column-j;
                if(max_one<number_of_ones)
                {
                    max_one=number_of_ones;
                    max_one_row=i;
                }
                break;
            }
        }
   }
   return max_one_row;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>v[i][j];
        }
    }
    int res=max_one_row(v);
    cout<<res<<endl;
}