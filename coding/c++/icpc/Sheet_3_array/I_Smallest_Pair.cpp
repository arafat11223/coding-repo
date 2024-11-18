#include<iostream>

using namespace std;
int main()
{
    int test_case;
    cin>>test_case;
    for(int i=0 ;i<test_case;i++)
    {
        int n;
        cin>>n;
        int a[n];
        //long long sum=0;
        
        for(int j=1;j<=n;j++)
        {
            cin>>a[j];
        }
        int min=a[1]+a[2]+1;
        for(int x=1;x<n;x++)
        {
            for(int y=x+1;y<=n;y++)
            {
                int sum=a[x]+a[y]+(y-x);
                
                if(sum<min)
                {
                    min=sum;
                }

            }
        }
        cout<<min<<endl;
       

    }
    
}