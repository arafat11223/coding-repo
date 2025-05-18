#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long even,odd;
    even=n/2;
    odd=(n+1)/2;
    long long sum_even=even*(even+1);
    long long sum_odd=odd*odd;
    long long sum=sum_even-sum_odd;

    
    cout<<sum<<endl;
}