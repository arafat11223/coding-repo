#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    string str;
    cin >> str;
    
    int point = 0;
    for (int i = 0; i < str.size(); i++)
    {
        switch (str[i])
        {
        case 'V':
            point += 5;
            break;
        case 'W':
            point += 2;
            break;
        case 'X':
            if (i!=str.size() - 1)
            {
                i++;
            }
            break;
        case 'Y':
            if (i!=str.size() - 1)
            {
                str.push_back(str[i + 1]);
                i++;
            }
            break;
        case 'Z':
            if (i!=str.size() - 1)
            {
                if (str[i + 1] == 'V')
                {
                    point = point / 5;
                    i++;
                }
                else if (str[i + 1] == 'W')
                {
                    point = point / 2;
                    i++;
                }
            }
            break;
        }
    }
    cout<<point<<endl;
}