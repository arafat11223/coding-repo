#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        int rem;
        //n=n/2;
        
        rem=n%2;
        n=n/2;
        cout<<rem<<" ";
    }
}