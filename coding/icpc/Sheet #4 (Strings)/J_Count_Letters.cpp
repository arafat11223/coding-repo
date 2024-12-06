#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int freq[26]={0};
    for(int i=0;i<str.length();i++)
    {
        freq[str[i]-'a']++;
    }
    for(int i=0;i<str.length();i++)
    {
        if(freq[str[i]-'a']=='0')
        {
            continue;
        }
        cout<<char(str[i])<<" : "<<freq[str[i]-'a']<<endl;
    }

}