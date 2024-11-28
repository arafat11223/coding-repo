#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        long long a;
        cin>>a;
        string str=to_string(a);
        for(int j=str.size()-1;j>=0;j--)
        {
            cout<<str[j]<<" ";

        }
        cout<<endl;
    }
}