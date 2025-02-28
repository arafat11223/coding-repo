#include <bits/stdc++.h>
using namespace std;
bool isbalance(char c1, char c2)
{
    return (c1 == '(' && c2 == ')' || c1 == '{' && c2 == '}' || c1 == '[' && c2 == ']');
    // {
    //     return true;
    // }
    // return false;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        stack<char> st;
        bool done = 1;
        for (auto ele : s)
        {
            if (ele == '(' || ele == '{' || ele == '[')
            {
                st.push(ele);
            }
            else
            {
                if (st.empty())
                {
                    done = 0;
                    break;
                }
                else
                {
                    if (isbalance(st.top(), ele))
                    {
                        st.pop();
                    }
                    else
                    {
                        done = 0;
                        break;
                    }
                }
            }
        }
        if (!st.empty())
        {
            done = 0;
        }
        if (done == 1)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}