#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    
    while(test--)
    {
        char arr[8][8];
        
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                //char ch;
                cin>>arr[i][j];
            }
        }
        bool found=false;
        
        for(int i=0;i<8;i++)
        {
            int cnt=0;
            for(int j=0;j<8;j++)
            {
                if(arr[i][j]=='R')
                {
                    cnt++;
                }
                
            }
            if(cnt==8)
            {
                cout<<"R"<<endl;
                found=true;
                break;
            }
            
        }
        if(found==false)
        {
            cout<<"B"<<endl;
        }
        
    }

}