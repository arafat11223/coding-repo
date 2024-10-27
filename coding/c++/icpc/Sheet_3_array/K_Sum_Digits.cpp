#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=s[i];
        //cout<<sum<<endl;
        cout<<sum<<" "<<endl;
    }
    cout<<sum;
}