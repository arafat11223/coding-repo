#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[n];
    cin>>arr;

    int st=0;
    int end=n-1;
    while(st<end)
    {
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
    cout<<arr;
}