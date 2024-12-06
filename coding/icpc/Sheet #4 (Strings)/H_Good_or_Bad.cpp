#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    int test;
    cin>>test;
    cin.ignore();
    //int flag=0;
    for(int i=0;i<test;i++)
    {
        string str;
        int flag=0;
        
        getline(cin,str);
        for(int j=0;j<str.length();j++)
        {
            if((str[j]=='0' && str[j+1]=='1' && str[j+2]=='0') || (str[j]=='1' && str[j+1]=='0' && str[j+2]=='1'))
            {
                flag=1;
                break;
            }
            
        }
        if(flag==1)
        {
            cout<<"Good"<<endl;
        }
        else
        {
            cout<<"Bad"<<endl;
        }
        
    }
}
