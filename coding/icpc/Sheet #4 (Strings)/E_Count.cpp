#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int sum=0;
    for(int i=0;i<str.size();i++)
    {
        sum+=str[i]-'0';

    }
    cout<<sum<<endl;

    
    

    
}