#include<iostream>
using namespace std;
int main()
{
    int n,i,even=0,odd=0,positive=0,negative=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        if(a%2==0)
        {
            even++;
        }
        if(a%2!=0) 
        {
            odd++;
        }
        if(a>0)
        {
            positive++;
        }
        if(a<0)
        {
            negative++;
        }
        
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<positive<<endl;
    cout<<"Negative: "<<negative<<endl;
    return 0;
}