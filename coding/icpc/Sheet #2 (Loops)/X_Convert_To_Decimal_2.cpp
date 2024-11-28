#include<iostream>
#include <cmath>

using namespace std;
int main()
{
    int n;
    
    
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        int j=0;
        int dec=0;
        while(a!=0)
        {
            int rem=a%2;
            
            
            if(rem==1)
            {
                dec=dec+1* pow(2,j);
                j++;
            }
            a=a/2;
            
        }
        cout<<dec<<endl;
    }
    
}