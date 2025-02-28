#include<bits/stdc++.h>
using namespace std;
int palindrome(vector<int>&v)
{
    int fig=0;
    int st=0;
    int end=v.size()-1;
    while(st<end)
    {
        if(v[st]!=v[end])
        {
            fig=1;
            break;
        } 
        st++;
        end--;  
    }
    if(fig=1)
    cout<<"No"<<endl;
    else
    cout<<"Yes"<<endl;

}
void binary(int a)
{
    vector<int>v;
    while(a!=0)
    {
        int rem=a%2;
        a=a/2;
        v.push_back(a);

    }
    palindrome(v);
}
int main()
{
    int n;
    cin>>n;
    binary(n);

}