#include<iostream>
using namespace std;
int main()
{
    int n,min,pos;
    //int min;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    min=a[0];
    cout<<min<<endl;
    for(int i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }

    }
    //cout<<"min "<<min<<endl;
    //int pos;
    for(int i=0;i<n;i++)
    {
        if(min=a[i])
        {
            pos=i+1;
            break;
        }
    }
    cout<<"pos "<<pos<<endl;
    cout<<min<<" "<<pos<<endl;
}