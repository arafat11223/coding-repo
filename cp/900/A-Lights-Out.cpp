#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3];
    int arr1[3][3]={0};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]%2!=0)
            {
                arr1[i][j]++;
                if(i+1 < 3) arr1[i+1][j]++;
                if(i-1 >= 0) arr1[i-1][j]++;
                if(j+1 < 3) arr1[i][j+1]++;
                if(j-1 >= 0) arr1[i][j-1]++;
            }

        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            
            if(arr1[i][j]%2!=0)
            {
                cout<<"0";
            }
            else
            {
                cout<<"1";
            }

        }
        cout<<endl;
    }
    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
            
    //         cout<<arr1[i][j];
    //     }
    //     cout<<endl;
    // }
}