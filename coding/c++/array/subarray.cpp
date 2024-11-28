#include<iostream>
using namespace std;
int main()
{
    int arr[1000]={-1,4,7,2};
    for(int i=0;i<4;i++)
    {
        for(int st=i;st<4;st++)
        {
            for(int end=i;end<=st;end++)
            {
                cout<<arr[end]<<" ";

            }
            cout<<endl;

        }
    }
}