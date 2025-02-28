#include<iostream>
//#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        //int ele;
        cin>>a[i];
        //a.push_back(ele);
    }
    
    for(int i=0;i<n;i++)
    {
        if(a[i]<=10)
        {
            cout<<"A["<<i<<"] = "<<a[i]<<endl;;
        }
        
    }

}