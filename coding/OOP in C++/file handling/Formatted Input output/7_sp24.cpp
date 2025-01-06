#include<bits/stdc++.h>
using namespace std;
int main()
{
    float f=1234.2645;
    cout.setf(ios::right,ios::adjustfield);
    cout.width(10);
    cout.precision(2);
    cout<<fixed;
    cout.fill('*');
    cout<<f<<endl;

}