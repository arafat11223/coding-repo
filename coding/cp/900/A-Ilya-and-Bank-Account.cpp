#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    if (n >= 0)
    {
        cout << n << endl;
        return 0;
    }
    string str = to_string(n);
    char ch1 = str[str.size() - 1];
    char ch2 = str[str.size() - 2];
    
    if (ch1 >= ch2)
    {
        str.erase(str.size() - 1, 1);
        //cout << str << endl;
    }
    else
    {
        str.erase(str.size() - 2, 1);
        //cout << str << endl;
    }

    if (str == "-" || str == "" || str == "-0")
    {
        cout << 0 << endl;
    }
    else
    {
        cout << str << endl;
    }
}