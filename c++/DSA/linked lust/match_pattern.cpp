#include<bits/stdc++.h>
using namespace std;
void matchpattern(string text,string pattern)
{
    int textlen=text.length();
    int patternlen=pattern.length();
    for(int i=0;i<textlen-patternlen;i++)
    {
        int j;
        for( j=0;j<patternlen;j++)
        {
            if(text[i+j]!=pattern[j])
            {
                break;
            }
        }
        if(j==patternlen)
        {
            cout<<"pattern match at index "<<i+1<<endl;
            return;
        }
    }
    cout<<"pattern did not match"<<endl;
}
int main()
{
    string text="aababbaabaaab";
    string pattern="abaa";
    matchpattern(text,pattern);
}
