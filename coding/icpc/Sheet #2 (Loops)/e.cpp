#include<iostream>
using namespace std;
int main()
{
    int max,i,n;
    cin>>n;
    int array[n];
    for(i=0;i<n;i++)
    {
        int a;
        cin>>array[i];
    }
   
    max=array[0];
    for(i=0;i<n;i++)
    {
        if(max<array[i])
        {
            max=array[i];
        }
    }
    cout<<max<<endl;
    return 0;
}
