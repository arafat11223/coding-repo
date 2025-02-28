#include<iostream>
#include<string>
#include<vector>
using namespace std;
string countshort(string str)
{
    vector<int>freq(26,0);
    for(int i=0;i<str.size();i++)
    {
        int index=str[i]-'a';
        freq[index]++;

    }
    int j;
    for(int i=0;i<26;i++)
    {
        while(freq[i]--)
        {
            str[j++]=i+'a';

        }
       
    }
    return str;

}
int main()
{
    string str;
    cin>>str;
    cout<<countshort(str)<<endl;

}