//count the number of triplets whose sum 
//is equal to given value x;

#include<iostream>
using namespace std;
int main()
{
    int a[10];
    for(int i=0;i<6;i++)
    {
        
        cin>>a[i];
    }
    int sum;
    cout<<"enter sum :";
    cin>>sum;
    int count=0;
    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            for(int k=j+1;k<6;k++)
            {
                if(a[i]+a[j]+a[k]==sum)
                {
                    count++;
                }

            }
            
        }
    }
    cout<<count;

}