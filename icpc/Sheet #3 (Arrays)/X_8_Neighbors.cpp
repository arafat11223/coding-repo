#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char arr[n+1][m+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int x,y;
    cin>>x>>y;
    if
    // row
    (arr[x][y-1]!='.' && arr[x][y+1]!='.' &&
    // col
    arr[x-1][y]!='.' && arr[x+1][y]!='.' &&
    // corner
    arr[x-1][y-1]!='.'&& arr[x+1][y+1]!='.'&&
    arr[x-1][y+1]!='.' && arr[x+1][y-1]!='.'
    )
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
}