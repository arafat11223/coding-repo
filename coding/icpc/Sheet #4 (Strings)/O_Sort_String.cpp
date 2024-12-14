#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    int freq[26]={0};
    for(int i=0;i<n;i++)
    {
        char c;
        cin>>c;
        //str.push_back(c);
        //freq[str[i]-'a']++;
        freq[c-'a']++;
        
    }
    
    for(int i=0;i<26;i++)
    {
        if(freq[i]!=0)
        {
            cout<<char(i+97);
        }
        freq[i]--;

    }
    //cout<<str<<endl;
    
}
