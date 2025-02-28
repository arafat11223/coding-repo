#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    sort(str.begin(),str.end());
    for(int i=0;i<str.length();i++)
    {
        char c=str[i];
        int count=1;
        while(str[i]==str[i+1])
        {
            count++;
            i++;
        }
        cout<<c<<" : "<<count<<endl;
    }
    
}