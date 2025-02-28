#include<iostream>
using namespace std;
void replace_min_max(int a[],int n)
{
    int min=a[0];
    int max=a[0];
    int min_pos=0;
    int max_pos=0;
    for(int i=1;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            min_pos=i;
        }
        if(max<a[i])
        {
            max=a[i];
            max_pos=i;
        }

    }
    a[min_pos]=max;
    a[max_pos]=min;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    replace_min_max(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}