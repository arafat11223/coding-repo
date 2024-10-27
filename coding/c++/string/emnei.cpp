#include<iostream>
#include<string >
#include<vector>
using namespace std;
int main()
{
    string s="abaacdd";
    vector<int>freq(26,0);
    for(int i=0;i<s.length();i++)
    {
        freq[s[i]-'a']++;
        


    }
    for(int i=0;i<s.size();i++)
    {
        cout<<freq[i]<<endl;
    }
    //cout<<ind;
}