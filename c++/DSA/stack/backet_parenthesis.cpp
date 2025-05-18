#include<bits/stdc++.h>
using namespace std;
bool iscorrect(char a,char b)
{
    return (a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']');
}
int main()
{
    string s;
    cin>>s;
    stack<char>st;
    int ans=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[' )
        {
            st.push(s[i]);
        }
        else
        {
            if(st.empty())
            {
                ans=1;
                break;

            }
            else
            {
                if(iscorrect(st.top(),s[i]))
                {
                    st.pop();
                }
                else
                {
                    ans=1;
                    break;
                }
            }

        }
    }
    if(ans==0 && st.empty())
    {
        cout<<"Balanced Parenthesis"<<endl;
    }
    else
    {
        cout<<"Not Balanced Parenthesis"<<endl;
    }
}