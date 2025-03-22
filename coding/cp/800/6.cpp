#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str = "";
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            str += "I love that ";
        }
        else
        {
            str += "I hate that ";
        }
    }
    str.replace(str.size()-5,4,"it");
    cout << str<<endl;
}