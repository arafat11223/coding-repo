// https://codeforces.com/contest/1251/p...
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string str;
        cin >> str;
        set<char> s;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == str[i + 1])
            {
                i++;
            }
            else
            {
                s.insert(str[i]);
            }
        }
        for (auto ele : s)
        {
            cout << ele;
        }
        cout << endl;
    }
}