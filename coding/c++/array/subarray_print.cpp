#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n]={1,2,3,4,5};
    for(int st=0;st<n;st++)
    {
        for(int end=st;end<n;end++)
        {
            for(int i=st;i<=end;i++)
            {
                cout<<a[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}