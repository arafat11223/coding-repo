//fint the total number of pair in the array
// whose sum is equal to the given value x
#include<iostream>
using namespace std;
int main()
{
    int a[10];
    for(int i=0;i<10;i++)
    {
        
        cin>>a[i];
    }
    int sum;
    cout<<"enter sum :";
    cin>>sum;
    int count=0;
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(a[i]+a[j]==sum)
            {
                count++;
            }
        }
    }
    cout<<count;

}