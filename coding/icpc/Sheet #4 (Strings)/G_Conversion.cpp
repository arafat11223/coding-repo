#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>

using namespace std;
int main()
{
    string str;
    getline(cin,str);
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==',')
        {
            str[i]=' ';
        }
        
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=tolower(str[i]);
        }
        
        
        else 
        {
            str[i]=toupper(str[i]);
        }
    }
    cout<<str<<endl;

}