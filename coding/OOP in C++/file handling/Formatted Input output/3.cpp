#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout.setf(ios::right);
    cout.width(10);
    cout << 123.235<<endl;
    cout.width(10);
    cout.precision(2);
    cout<<fixed;
    cout << 123.23243 << endl;
    cout.fill('*');
    cout.width(10);
    cout << 123.23;
    return 0;
}
