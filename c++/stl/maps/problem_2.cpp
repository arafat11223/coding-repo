//You are given a string s that is made up of 
//words separated by spaces. Your task is to find
// the word with the highest frequency, i.e.
// it appears the most times in the sentence.
// If multiple words have maximum frequency, then
// print the word that occurs first in the sentence.


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    cin.ignore();
    while(test--)
    {
        string str;
        getline(cin,str);
        string temp;
        vector<string>st;
        for(auto ele:str)
        {
            if(isspace(ele))
            {
                st.push_back(temp);
                temp.clear();
            }
            else
            {
                temp+=ele;
            }
        }
        map<string,int>cnt;
        int maximum=0;
        for(auto ele:st)
        {
            cnt[ele]++;
            maximum=max(maximum,cnt[ele]);
        }
        string ans;
        for(auto ele:st)
        {
            if(maximum==cnt[ele])
            {
                ans=ele;
                break;
            }
        }
        cout<<ans<<" "<<maximum<<endl;
    }


}